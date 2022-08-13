void printf (char* str)
{
unsigned short* VideoMemory = (unsigned short*)0xb0000;
for (int i = 0; str[i] != '\n' ; i++)
	VideoMemory[i] = VideoMemory[i] & 0xFFFF | str[i];
}

void "C"  kernelMain(void* multiboot_structure, unsigned int magicnumber)
	{
		printf("Hello World! -- https://github.com/DerrickKirimi )"
		while(1);
	}

