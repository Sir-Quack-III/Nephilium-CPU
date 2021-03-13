#include <iostream>

using byte = uint8_t;

struct Mem {
	byte RAM[128]; // 128 bytes of ram
	byte iCache[256]; // 256 bytes of instruction memory
	void init() {
		for (int x = 0; x < 128; x++) {
			RAM[x] = 0x00;
		}
	}
};

struct CPU {
	// Registers:
	byte A;
	byte B;
	byte C;
	byte D;
	byte E;
	byte F;
	byte G;
	byte H;

	byte SP; // Stack pointer
	byte PC; // Program Counter
};

int main() {
	std::string file;
	printf("Enter input file: ");
	scanf_s("%s", file);
	printf("%s", file);
}
