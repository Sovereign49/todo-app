#include <sys/socket.h>
#include <stdio.h>

int main(int argc, char **argv) {
    // Creating a socket
    int server_fd;
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("cannot create socket"); 
        return 0; 
    }
    // Binding the socket to port 8080
    struct sockaddr_in address;
    const int PORT = 8080;

    /* htonl converts a long integer (e.g. address) to a network representation */ 
    /* htons converts a short integer (e.g. port) to a network representation */ 
    memset((char *)&address, 0, sizeof(address)); 
    address.sin_family = AF_INET; 
    address.sin_addr.s_addr = htonl(INADDR_ANY); // INADDR_ANY is a special value that means "any IP address" e.g.0.0.0.0
    address.sin_port = htons(PORT); 

    if (bind(server_fd,(struct sockaddr *)&address,sizeof(address)) < 0) 
    { 
        perror(“bind failed”); 
        return 0; 
    }

    // Listening for a connection and accepting it
    if (listen(server_fd, 3) < 0) // 3 is the maximum number of pending connections
    { 
        perror(“In listen”); 
        exit(EXIT_FAILURE); 
    }
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen))<0) // Accepting a connection on port 8080
    {
        perror("In accept");            
        exit(EXIT_FAILURE);        
    }


    printf("server started!");  
    return 0;
}