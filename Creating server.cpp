#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

int main() {
    WSADATA wsaData;
    int iResult;

    // Initialize Winsock
    iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (iResult != 0) {
        std::cerr << "WSAStartup failed: " << iResult << std::endl;
        return 1;
    }

    SOCKET server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    const char* response = "HTTP/1.1 200 OK\nContent-Type: text/plain\nContent-Length: 12\n\nHello world";
    char buffer[30000] = { 0 };

    // Create socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == INVALID_SOCKET) {
        std::cerr << "Socket failed: " << WSAGetLastError() << std::endl;
        WSACleanup();
        return 1;
    }

    // Define the address and port
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(8080);

    // Bind the socket
    iResult = bind(server_fd, (struct sockaddr*)&address, sizeof(address));
    if (iResult == SOCKET_ERROR) {
        std::cerr << "Bind failed: " << WSAGetLastError() << std::endl;
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }

    // Listen for incoming connections
    iResult = listen(server_fd, 3);
    if (iResult == SOCKET_ERROR) {
        std::cerr << "Listen failed: " << WSAGetLastError() << std::endl;
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }

    // Accept a client connection
    new_socket = accept(server_fd, (struct sockaddr*)&address, &addrlen);
    if (new_socket == INVALID_SOCKET) {
        std::cerr << "Accept failed: " << WSAGetLastError() << std::endl;
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }

    // Read data from the client
    iResult = recv(new_socket, buffer, 30000, 0);
    if (iResult == SOCKET_ERROR) {
        std::cerr << "Recv failed: " << WSAGetLastError() << std::endl;
    } else {
        std::cout << "Received: " << buffer << std::endl;
    }

    // Send response to the client
    iResult = send(new_socket, response, strlen(response), 0);
    if (iResult == SOCKET_ERROR) {
        std::cerr << "Send failed: " << WSAGetLastError() << std::endl;
    }

    // Clean up
    closesocket(new_socket);
    closesocket(server_fd);
    WSACleanup();

    return 0;
}
