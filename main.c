#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
int server_fd; 

struct sockaddr_in server_addr;
//create server socket
if ((server_fd = socket(AF_INET, SOCK_STREAM,0)) < 0) {
  perror("socket failed");
  exit(EXIT_FAILURE);
}
//config
server_addr.sin_family = AF_INET;
server_addr.sin_addr.s_addr = INADDR_ANY;
server_addr.sin_port = htons(PORT);

//bind socket to port
if(bind(server_fd,
      (struct sockaddr *)&server_addr,
      sizeof(server_addr)) < 0){
  perror("Binding Failed");
  exit(EXIT_FAILURE);
}
//listen
if(listen(server_fd, 10) < 0){
  perror("listen failed");
  exit(EXIT_FAILURE);
}
int main()
{
  printf("Hello World\n");

  return EXIT_SUCCESS;
}
