#include <iostream>

struct Mem {
	int memlimit = 256;
	uint8_t RAM = [] * memlimit;
	uint8_t iCache = 
	void init() {
		for (x = 0; x < memlimit; x++) {
			RAM[x] = 0x00;
		}
	}
};

struct CPU {
	// Registers:
	uint8_t A;
	uint8_t B;
	uint8_t C;
	uint8_t D;
	
	uint8_t SP; // Stack pointer
	uint8_t PC; // Program Counter
};

int main() {
	
}