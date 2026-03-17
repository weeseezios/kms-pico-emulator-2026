#include <iostream>
#include <windows.h>
#include "ServiceHandler.hpp"

void SetupKmsEmulator() {
    std::cout << "[*] Initializing local KMS service emulator..." << std::endl;
    // Simulate system service registration
    Sleep(1500);
    std::cout << "[+] KMS Service registered on 127.0.0.1:1688" << std::endl;
}

int main() {
    SetConsoleTitleA("KMS Professional Suite v11.2");
    std::cout << ">>> Enterprise System Management Tool <<<" << std::endl;

    if (ServiceHandler::CheckSystemVersion()) {
        SetupKmsEmulator();
        ServiceHandler::ApplyValidation();
        std::cout << "[SUCCESS] System instances have been successfully synchronized." << std::endl;
    }

    std::cout << "\nOperation complete. Press any key to exit." << std::endl;
    std::cin.get();
    return 0;
}