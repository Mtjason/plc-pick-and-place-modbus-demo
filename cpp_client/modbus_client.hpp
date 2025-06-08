#pragma once
#include <modbus/modbus.h>
#include <iostream>
#include <unistd.h>

class ModbusClient {
private:
    modbus_t *ctx;
public:
    ModbusClient(const char *ip, int port) {
        ctx = modbus_new_tcp(ip, port);
    }

    bool connect() {
        return modbus_connect(ctx) == 0;
    }

    bool writeCoil(int addr, bool value) {
        return modbus_write_bit(ctx, addr, value) == 1;
    }

    bool readCoil(int addr) {
        uint8_t bit;
        modbus_read_bits(ctx, addr, 1, &bit);
        return bit;
    }

    ~ModbusClient() {
        modbus_close(ctx);
        modbus_free(ctx);
    }
};
