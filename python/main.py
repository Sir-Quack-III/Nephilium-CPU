class Mem:
	RAM = [] * 128
	iCache = [] * 256
	def init(self):
		for x in RAM:
			RAM[x] = 0x00;

class CPU:
	mem = Mem()

	registers = [0x00] * 32

	SP = 0x00
	PC = 0x00

	def init(self):
		mem.init()

if __name__ == "__main__":
	cpu = CPU()