#include <sys/socket.h>
#include <stdio.h>

int main(int argc, char **argv) {

    int server_fd;
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("cannot create socket"); 
        return 0; 
    }
    printf("server started!");  
    return 0;
}