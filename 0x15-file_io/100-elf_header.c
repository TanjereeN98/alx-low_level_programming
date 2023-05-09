#include "main.h"

/**
 * print_elf_head_info - function that displays the information contained in the ELF
 * @ehdr: pointer
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define ELF_MAGIC "\x7f\x45\x4c\x46"

typedef struct {
    unsigned char e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

void print_elf_header_info(Elf64_Ehdr *ehdr)
{
    printf("  Magic:   ");
    for (int i = 0; i < sizeof(ehdr->e_ident); i++) {
        printf("%02x ", ehdr->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (ehdr->e_ident[EI_CLASS]) {
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
            printf("<unknown: %d>\n", ehdr->e_ident[EI_CLASS]);
            break;
    }

    printf("  Data:                              ");
    switch (ehdr->e_ident[EI_DATA]) {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %d>\n", ehdr->e_ident[EI_DATA]);
            break;
    }

    printf("  Version:                           %d\n", ehdr->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (ehdr->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
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
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
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
            printf("<unknown: %d>\n", ehdr->e_ident[EI_OSABI]);
            break;
    }

    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (ehdr->e_type) {
        case ET_NONE:
            printf("none\n");
            break;
        case ET_REL:
            printf("relocatable\n");
            break;
        case ET_EXEC:
            printf("executable\n");
            break;
        case ET_DYN:
            printf("shared object\n");
            break;
        case ET_CORE:
            printf("core file\n");
            break;
        default:
            printf("<unknown: %d>\n", ehdr->e_type);
            break;
    }

    printf("  Entry point address:               0x%016lx\n", ehdr->e_entry);
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: cannot open file '%s'\n", argv[1]);
        return 98;
    }

    Elf64_Ehdr ehdr;
    ssize_t n = read(fd, &ehdr, sizeof(ehdr));
    if (n == -1 || n != sizeof(ehdr)) {
        fprintf(stderr, "Error: cannot read ELF header from file '%s'\n", argv[1]);
        close(fd);
        return 98;
    }

    if (memcmp(ehdr.e_ident, ELF_MAGIC, strlen(ELF_MAGIC)) != 0) {
        fprintf(stderr, "Error: file '%s' is not an ELF file\n", argv[1]);
        close(fd);
        return 98;
    }

    print_elf_header_info(&ehdr);

    close(fd);
    return 0;
}
