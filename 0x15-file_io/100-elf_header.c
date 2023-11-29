#include "main.h"

/**
 * main - Checks code
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
    FILE *fp;
    Elf64_Ehdr ehdr;

    if (argc != 2)
    {   
        fprintf(stderr, "Usage: ./elf_header elf_file\n");
        exit(98);
    }   

    fp = fopen(argv[1], "rb");
    if (!fp)
    {   
        fprintf(stderr, "Error: Can't read %s\n", argv[1]);
        exit(98);
    } 

    fread(&ehdr, sizeof(ehdr), 1, fp);
    check_elf_file(&ehdr);
    print_magic(ehdr.e_ident);
    print_class(ehdr.e_ident);
    print_data(ehdr.e_ident);
    print_version(ehdr.e_ident);
    print_osabi(ehdr.e_ident);

    return (0);
}

int check_elf_file(Elf64_Ehdr *hdr)
{
    int i = 0;

    if (hdr->e_ident[i] != 127 &&
        hdr->e_ident[i + 1] != 'E' &&
        hdr->e_ident[i + 2] != 'L' &&
        hdr->e_ident[i + 3] != 'F'
    )
    {
        return (-1);
    }
    printf("This is elf file\n");
    return (1);
}

void print_magic(unsigned char *e_ident)
{
    int i;

    printf("ELF Header\n");
    printf("  Magic:    ");

    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x", e_ident[i]);
        if (i == 15)
        {
            printf("\n");
            continue;
        }
        printf(" ");
    }
}

void print_class(unsigned char *e_ident)
{
    printf("  Class:                              ");
    switch (e_ident[EI_CLASS])
    {
    case ELFCLASSNONE:
        printf("Invalid class\n");
        break;
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("Unknown class\n");
        break;
    }
}

void print_osabi(unsigned char *e_ident)
{
    printf("  OS/ABI:                             ");
    switch (e_ident[EI_OSABI])
    {
    case ELFOSABI_SYSV:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_HPUX:
        printf("UNIX - HPUX\n");
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
    case ELFOSABI_IRIX:
        printf("UNIX - IRIX\n");
        break;
    case ELFOSABI_FREEBSD:
        printf("UNIX - FreeBSD\n");
        break;
    case ELFOSABI_TRU64:
        printf("UNIX - TRU64_UNIX\n");
        break;
    case ELFOSABI_ARM:
        printf("UNIX - ARM architecture\n");
        break;
    case ELFOSABI_STANDALONE:
        printf("UNIX - Stand-alone (embedded)\n");
        break;
    default:
        printf("Unknown %u\n", e_ident[EI_OSABI]);
        break;
    }
}

void print_data(unsigned char *e_ident)
{
    printf("  Data:                               ");
    switch (e_ident[EI_DATA])
    {
    case ELFDATANONE:
        printf("Unknown data format\n");
        break;
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("Unknown data format\n");
        break;
    }
}

void print_version(unsigned char *e_ident)
{
    printf("  Version:                            ");
    switch (e_ident[EI_VERSION])
    {
    case EV_NONE:
        printf("Invalid version\n");
        break;
    case EV_CURRENT:
        printf("1 (current)\n");
        break;
    default:
        printf("Unknown version\n");
        break;
    }
}
