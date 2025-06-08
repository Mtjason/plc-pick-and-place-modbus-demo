#include "modbus_client.hpp"
#include <iostream>
#include <unistd.h>

int main() {
    ModbusClient client("127.0.0.1", 502); // OpenPLC TCP server
    //ModbusClient client("192.168.0.87", 502); // OpenPLC TCP server

    if (!client.connect()) {
        std::cerr << "❌ Failed to connect to OpenPLC at 192.168.0.87" << std::endl;
        return 1;
    }

    std::cout << "✅ Connected to OpenPLC Modbus server\n";

    // 模擬按下 START_BUTTON（Coil 位址 0）
    client.writeCoil(0, true);
    std::cout << "🟢 START_BUTTON set to TRUE\n";
    sleep(1);
    client.writeCoil(0, false);  // 放開按鍵
    std::cout << "🟡 START_BUTTON set to FALSE\n";

    // 讀取 ARM_UP（Coil 位址 2）
    bool armUp = client.readCoil(2);
    std::cout << "📦 ARM_UP = " << (armUp ? "TRUE ✅" : "FALSE ❌") << std::endl;

    return 0;
}
