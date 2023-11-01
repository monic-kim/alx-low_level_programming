#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnl.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 *
 * check_elf - checks if a file is an ELF file
 * @e_ident: pointer to an array with the ELF magic numbers
 *
 * Description: if the file is not an ELF file - exit 98.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index <4; index++)
	{
		if (e_indent[index] != 127 &&
			       	e_indent[index] != 'E' &&
				e_indent[index] != 'L' &&
				e_indent[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_magic - prints the magic numbers of an ELF header
 * @e_ident: pointer to an array with the ELF magic numbers
 * Description: magic numbers are separated by spaces
 */
void print_magic(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<uknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_data - prints data of an ELF header
 * @e_iddent: pointer to an array with the ELF class
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data                                    ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATAONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement. little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's compliment, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_version - prints the version of an ELF header
 * @e_ident: pointeer to an array with the ELF version
 */
void print_version(unsigned char *e_ident)
{
	printf("    Version:                               %d",
			e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("  (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * print_osabi - prints the OS/ABI of an ELF header
 * @e_ident: pointer to an array with the ELF version
 */
void print_osabi(unsigned char *e_ident)
{
	printf("   OS/ABI:                               ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - prints the ABI version oa ELF header
 * @e_ident: pointer to an array with the ELF ABI version
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI                                                  %d\n",
			e_ident[EI_ABIVERSION]);
}
/**
 * print_type - prints the type of an ELF header
 * @e_type: The ELF type
 * @e_ident: pointer to an arrray with the ELF class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSBS)
		e_type >>= 8;

	printf("  Type                                        ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatablee file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x\n", e_type);
	}
}
/**
 * print_entry - print the entry point of an ELF header
 * @e_entry: address of the ELF entry point
 * e_ident: pointer to an array with the ELF class
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("Entry point address:");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#Ix\n", e_entry);
}
/**
 * close_elf - closes an ELF file
 * @elf: file ddescriptor of the ELF file
 * Descripton: if the file cannot be closed - exit 98
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, Error: Can't close fd %d\n", elf);
		exit(98);
	}
}






