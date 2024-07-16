#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main() {
    int fd = open("example.txt", O_RDONLY);  // Replace with your file path
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    char *line;
    while ((line = get_next_line(fd)) != NULL) {
        printf("Line: %s\n", line);
        free(line);  // Free memory allocated by get_next_line
    }

    close(fd);
    return 0;
}