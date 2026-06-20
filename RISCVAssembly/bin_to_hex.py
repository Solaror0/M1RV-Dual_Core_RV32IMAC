import sys

def main():
    if len(sys.argv) < 3:
        print("Usage: python bin_to_hex.py <input.bin> <output.hex>")
        sys.exit(1)

    with open(sys.argv[1], "rb") as f:
        bindata = f.read()

    # Pad binary with zeros to ensure complete 4-byte words
    while len(bindata) % 4 != 0:
        bindata += b'\x00'

    with open(sys.argv[2], "w") as f:
        # Step through 4 bytes at a time (32-bit words)
        for i in range(0, len(bindata), 4):
            word = bindata[i:i+4]
            # Format as Little-Endian hex string (RV32 standard)
            hex_str = f"{word[3]:02x}{word[2]:02x}{word[1]:02x}{word[0]:02x}"
            f.write(hex_str + "\n")

if __name__ == "__main__":
    main()