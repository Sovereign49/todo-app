# todo-app
This is a project to learn more about web development by creating a web server from scratch

## Prerequisites
I took a class in highschool called Networking 20. It was part of the IB curriculum and went through most of the excess content we couldnt fit in the regular computing science courses at our school. Within the course we learned some key things integral to this project.

### OSI
The OSI model is a model for how we connect computers and build software and hardware arround those connections. This was then simplified to the TCP/IP model.

### TCP
We will be using the Transmission Communication Protocol (TCP) to send and receive data between the server and the client. There are several ports we can use to communicate over the network. This seperates data for different applications and helps the network stay functional. For out purposes we will be using the port 8080 because it is a port commonly used to develop http servers.

another alternative to the TCP protocol is to use the UDP protocol, but that protocol is much more free form and unreliable. It is theoretically possible to host a web server using said protocol but it is time consuming and unreliable, making TCP the better choice.

## Terms and Definitions
- Socket: A mechanism to give programs access to the network.