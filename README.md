# Pick-and-Place Control Demo: OpenPLC + C++ Modbus TCP Client

This project demonstrates a minimal **Pick-and-Place control system** using [OpenPLC](https://www.openplcproject.com/) as the PLC runtime and a custom **C++ Modbus TCP client** for external control and monitoring.  
All code runs locally in WSL/Linux – no physical PLC hardware is required.

---

## Project Overview

- **C++ Modbus TCP Client:**  
  Reads/writes PLC I/O points via Modbus TCP.
- **OpenPLC Structured Text Program:**  
  Implements basic pick-and-place logic (start/stop, arm, gripper actions).

---

## Folder Structure

plc-pick-and-place-modbus-demo/
├── cpp_client/
│   ├── main.cpp
│   ├── modbus_client.hpp
│   ├── Makefile
├── plc_program/
│   └── pick_and_place.st
└── README.md 


## Requirements

- [OpenPLC Runtime](https://www.openplcproject.com/runtime/) (installed and running)
- Ubuntu/WSL or Linux environment
- C++17 compiler (`g++`)
- **libmodbus** (Modbus TCP C library)

### Install libmodbus (on Ubuntu/WSL)

```sh
sudo apt-get update
sudo apt-get install libmodbus-dev
