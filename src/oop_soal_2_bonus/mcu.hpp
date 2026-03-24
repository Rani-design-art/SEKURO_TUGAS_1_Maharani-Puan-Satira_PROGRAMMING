#pragma once
#include "bits/stdc++.h"

class MCU{
    private:
    protected:
        string name;
        float cpu_speed;
        int memory; 
        string os;
        int volt;
    public:
        MCU(float cpu_speed,int memory,string os,string name,int volt);
        virtual void showSpek();
        virtual ~MCU();
        virtual void nambah_volt(int penambahan_voltase);
        virtual void ganti_os(string new_os);
};
