#include "main.h"

/**
 * main - displays headers.
 * @argc: number of args.
 * @argv: string of args.
 * Return: 0 when success.
*/
int main(int argc, char *argv[])
{
	Elf32_Ehdr *ehdr;
	void *elf_data;
	int fd;
	struct stat st;

	if (argc != 2)
	{
		printf("Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}
	if (fstat(fd, &st) == -1)
	{
		perror("Error fstat file");
		exit(98);
	}
	elf_data = mmap(NULL, st.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
	if (elf_data == MAP_FAILED)
	{
		perror("Error mmap file");
		exit(98);
	}
	ehdr = (Elf32_Ehdr *)elf_data;
	printf("Magic: %02x %02x %02x\n", ehdr->e_ident[0], ehdr->e_ident[1], ehdr->e_ident[2]);
	printf("Class: %s\n", ehdr->e_ident[4] == 1 ? "ELF32" : "ELF64");
	printf("Data: %s\n", ehdr->e_ident[5] == 1 ? "LSB" : "MSB");
	printf("Version: %d\n", ehdr->e_ident[6]);
	printf("OS/ABI: %d\n", ehdr->e_ident[7]);
	printf("ABI Version: %d\n", ehdr->e_ident[8]);
	printf("Type: %d\n", ehdr->e_type);
	printf("Entry point address: %08x\n", ehdr->e_entry);
	munmap(elf_data, st.st_size);
	close(fd);

	return (0);
}
