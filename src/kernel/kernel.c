int main()
{
    const char *string = "Basic Kernel!!";
    char *videomemptr = (char *)0xb8000; // video memory
    unsigned int i = 0;
    unsigned int j = 0;

    while (j < 80 * 25 * 2)
    {
        videomemptr[j] = ' ';      // blank character
        videomemptr[j + 1] = 0x02; // attribute-byte 0 - black background 2 - green font
        j = j + 2;
    }
    j = 0;
    while (string[j] != '\0')
    {
        videomemptr[i] = string[j];
        videomemptr[i + 1] = 0x02;
        ++j;
        i = i + 2;
    }
    return 0;
}