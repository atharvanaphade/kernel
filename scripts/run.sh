#!/bin/bash

# Run QEMU
qemu-system-aarch64 -M virt -cpu cortex-a72 -m 1024 -kernel src/build/kernel.elf
