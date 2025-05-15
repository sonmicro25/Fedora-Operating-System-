#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd = open("test.txt", O_CREAT | O_WRONLY, 0644);  // open() system call
    if (fd < 0) {
        perror("open");
        return 1;
    }

    write(fd, "Hello Fedora\n", 13);  // write() system call
    close(fd);  // close() system call

    return 0;
}