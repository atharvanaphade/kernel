# Makefile for building kernel and bootloader

CC := clang
LD := clang

CFLAGS := -Wall -Wextra -Werror -nostdlib -ffreestanding -mcpu=cortex-a72 -target aarch64-apple-macos -Iinclude
LDFLAGS := -lc

BOOT_SRC := kernel/boot/bootloader.s
KERNEL_SRC := kernel/kernel.c

BOOT_OBJ := $(BOOT_SRC:.s=.o)
KERNEL_OBJ := $(KERNEL_SRC:.c=.o)

OUTPUT := build/kernel.elf

all: $(OUTPUT)

$(BOOT_OBJ): $(BOOT_SRC)
	$(CC) $(CFLAGS) -c $< -o $@

$(KERNEL_OBJ): $(KERNEL_SRC)
	$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT): $(BOOT_OBJ) $(KERNEL_OBJ)
	$(CC) $(CFLAGS) -Wl,-e,_start $(BOOT_OBJ) $(KERNEL_OBJ) -o $(OUTPUT) $(LDFLAGS) -Wl,-image_base,0x80000000

clean:
	rm -rf $(BOOT_OBJ) $(KERNEL_OBJ) $(OUTPUT)
