import serial
import struct
import time
import os

# --- Configuration ---
# Change this to your FPGA's COM port (e.g., 'COM3' on Windows, '/dev/ttyUSB0' on Linux)
COM_PORT = 'COM5' 
BAUD_RATE = 115200
BIN_FILE = 'imem.bin'
DATA_FILE = "dmem.bin"

# Your custom Bootloader Magic Words
BOOT_START = 0xBDFEBCAF
BOOT_MID   = 0xD2AF59FB
BOOT_END = 0xBCFEBCA3

def main():
    if not os.path.exists(BIN_FILE):
        print(f"Error: {BIN_FILE} not found!")
        return

    # Open the serial port
    print(f"Opening {COM_PORT} at {BAUD_RATE} baud...")
    with serial.Serial(COM_PORT, BAUD_RATE, timeout=1) as ser:
        
        # 1. Send the Start Word
        # '<I' means Little-Endian, Unsigned 32-bit Integer
        print(f"Sending Start Word: {hex(BOOT_START)}")
        ser.write(struct.pack('<I', BOOT_START))
        
        # Give the FPGA a tiny fraction of a second to enter the READING state
        time.sleep(0.01) 
        
        # 2. Send the Binary Payload
        file_size = os.path.getsize(BIN_FILE)
        print(f"Sending Payload: {file_size} bytes...")
        with open(BIN_FILE, 'rb') as f:
            payload = f.read()
            ser.write(payload)
            
        # 3. Send the End Word for Imem
        print(f"Sending End Word for Imem, Dmem Loading begins: {hex(BOOT_MID)}")
        ser.write(struct.pack('<I', BOOT_MID))
        
        file_size = os.path.getsize(DATA_FILE)
        print(f"Sending Payload: {file_size} bytes...")
        with open(DATA_FILE, 'rb') as f:
            payload = f.read()
            ser.write(payload)
            
        ser.write(struct.pack('<I', BOOT_END))
        
        # Ensure everything is pushed out of the PC's USB buffer
        ser.flush() 
        print("Upload Complete! CPU should now exit reset and execute.")

if __name__ == "__main__":
    main()