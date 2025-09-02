# http_c
How sockets and websockets Work:

  If a program or process running on a host is like a HOUSE, then a socket is like a door that lets mail go in and out. When a person in the house receives or delivers a letter, he or can be agnostic to how the mainl is being delivered in the outside world.

  Host or Server(PROCESS) <-(SOCKET)-> (TCP WITH BUFFERS, VARIABLES)^2 <-(INTERNET)->(TCP WITH BUFFERS, VARIABLES)<->(SOCKET)->(PROCESS)Host or Server

  WHERE the TCP with buffers and vars is controlled by the operating system.
  
  Using the socket network interface or web server can use a set of functions from C stand package <sys/socket.h> and let our server "Talk to:" Clients over the interne. Those clients are also using sockets to talk to us, so socket is basically like a consensus on how to talk with each other over the internet.
  <SERVER RUNNING ON SERVERIP>                      CLIENT 
  | Create Socket, port=x, for 
  incoming request: serverSocket = socket()|
  | ------------- |
  | Wait for incoming connection request:  |< - >| Create Socket, Connect to serverIP, port=x: 
                                                   clientSocket = socket() |
  | conectionSocket = serverSocket.accept()|     | Sent Request using clientSocket |
  | Read request from connectionSocket |         | Read Reply from clientSocket |
  | Write reply to connectionSocket |            | Close clientSocket |
  | Close connectionSocket |
  
  Set up Server Socket.

  We need to create and configure a socket for the server.

  AF_INET: useIPv4 (vs IPv6)
  SOCK_STREAM: use TCP (vsUDP)
  INADDR_ANY: the server accepts connectios from any network interface.



