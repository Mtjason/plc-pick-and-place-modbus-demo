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

