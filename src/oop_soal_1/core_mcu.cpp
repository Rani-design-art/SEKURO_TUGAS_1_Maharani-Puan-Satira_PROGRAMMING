#include "core_mcu.hpp"

Core_MCU::Core_MCU(float cpu_speed, int memory, string os, string nama, int volt) {
    this->cpu_speed = cpu_speed;
    this->memory = memory;
    this->os = os;
    this->nama = nama;
    this->volt = volt;

    cout << "[Core_MCU] : MCU utama yang bernama "<< this->nama << "telah dibuat" << endl;
}

Core_MCU::~Core_MCU() {
    cout << "[Core_MCU] : MCU utama yang bernama "<< this->nama << " telah dihapus" << endl;
}

void Core_MCU::showSpek() {
    cout << "[SPEK DEVICE] : [NAMA_DEVICE]: " << this->nama << " | [CPU CLOCK] : " << this->cpu_speed << " | [MEMORY] : " << this->memory << " | [OS] : " << this->os << endl;
}

void Core_MCU::nambah_volt(int penambahan_voltase) {
    this->volt += penambahan_voltase;

    cout << "[Core_MCU] : MCU utama yang bernama "<< this->nama << " Telah ditambah voltasenya menjadi = " << this->volt << endl;
}

void Core_MCU::ganti_os(string new_os) {
    this->os = new_os;
    cout << "[Core_MCU] : MCU utama yang bernama "<< this->nama << " Telah diganti OS nya menjadi = " << this->os << endl;
}

string Core_MCU::get_os() {
    return this->os;
}
