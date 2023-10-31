#include "main.h"

/**
 * print_elf_header_info - prints header info
 * @header: elf64 header info.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Others");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Others");
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - displays the information contained in the ELF header of an ELF file
 * @argc: number of args
 * @argv: string of args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header) || lseek(fd, 0, SEEK_SET) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Not a valid ELF file\n");
		close(fd);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not a valid ELF file\n");
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	print_elf_header_info(&header);

	close(fd);
	return (0);
}
