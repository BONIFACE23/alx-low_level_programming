#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define MAX_BUFFER_SIZE 64

void print_error(char *error_message)
{
	fprintf(stderr, "Error: %s\n", error_message);
	exit(98);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	char *elf_filename = argv[1];

	int fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Failed to open ELF file");
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Failed to read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("File is not an ELF file");
	}

	char *class_str = "";
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			class_str = "None";
			break;
		case ELFCLASS32:
			class_str = "ELF32";
			break;
		case ELFCLASS64:
			class_str = "ELF64";
			break;
		default:
			class_str = "Unknown";
			break;
	}

	char *data_str = "";
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			data_str = "None";
			break;
		case ELFDATA2LSB:
			data_str = "2's complement, little endian";
			break;
		case ELFDATA2MSB:
			data_str = "2's complement, big endian";
			break;
		default:
			data_str = "Unknown";
			break;
	}

	char *osabi_str = "";
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			osabi_str = "UNIX System V ABI";
			break;
		case ELFOSABI_HPUX:
			osabi_str = "HP-UX ABI";
			break;
		case ELFOSABI_NETBSD:
			osabi_str = "NetBSD ABI";
			break;
		case ELFOSABI_LINUX:
			osabi_str = "Linux ABI";
			break;
		case ELFOSABI_SOLARIS:
			osabi_str = "Solaris ABI";
			break;
		case ELFOSABI_IRIX:
			osabi_str = "IRIX ABI";
			break;
		case ELFOSABI_FREEBSD:
			osabi_str = "FreeBSD ABI";
			break;
		case ELFOSABI_TRU64:
			osabi_str = "TRU64 UNIX ABI";
			break;
		case ELFOSABI_ARM:
			osabi_str = "ARM architecture ABI";
			break;
		default:
			osabi_str = "Unknown";
			break;
	}

	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");

	printf("Class: %s");
}

