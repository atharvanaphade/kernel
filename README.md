### x86 Hello World! kernel bootloader

nasm -f bin ./boot.asm -o ./boot.bin

qemu-system-x86_64 -hda boot.bin
