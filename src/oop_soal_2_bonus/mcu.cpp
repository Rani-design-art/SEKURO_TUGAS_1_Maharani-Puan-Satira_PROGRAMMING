#include "mcu.hpp"

MCU::MCU(float cpu_speed, int memory, string os, string name, int volt) {
    this->name = name;
    this->cpu_speed = cpu_speed;
    this->memory = memory;
    this->os = os;
    this->volt = volt;

    cout << "[KONTRUKTOR MCU] : Objek "<< this->name << " berhasil dibuat" << endl;
}

void MCU::showSpek() {
    cout << "[BASE MCU] : " << name << " | CPU: " << cpu_speed 
         << "GHz | RAM: " << memory << "MB | OS: " << os 
         << " | Volt: " << volt << "V" << endl;
}

MCU::~MCU() {
    cout << "[DESTRUKTOR MCU] : Objek base" << name << " dibersihkan." << endl;
}

void MCU::nambah_volt(int penambahan_voltase) {
    this->volt += penambahan_voltase;
}

void MCU::ganti_os(string new_os) {
    this->os = new_os;
}
