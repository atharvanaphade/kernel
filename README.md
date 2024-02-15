# Simple Kernel Project

This is a simple project to build a basic kernel that displays a mouse pointer and allows the user to perform basic calculations directly in the kernel environment. The project is targeted for the Apple M1 MacBook Air.

## Project Structure

The project is organized as follows:

## Build Instructions

To build the project, follow these steps:

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/simple-kernel-project.git
    ```

2. Navigate to the project directory:

    ```bash
    cd simple-kernel-project
    ```

3. Run the build script:

    ```bash
    ./scripts/build.sh
    ```

## Running the Kernel

After building the project, you can run the kernel using QEMU. Make sure you have QEMU installed on your system. Then, use the following command:

```bash
qemu-system-aarch64 -machine virt -cpu cortex-a72 -m 512M -kernel build/kernel.elf
```

This will launch QEMU and execute the kernel. You should see the kernel output in the QEMU window.

## Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).
