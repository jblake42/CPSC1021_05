#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include <iostream>
#include <string>
using namespace std;

class Motorcycle{
    private: 
        string make{"\0"}, model{"\0"}, color{"\0"};
        int year{0}, cc{0};
    
    public: 
        bool setMake(string ma);
        bool setModel(string mo);
        bool setYear(int y);
        bool setCC(int c);
        bool setColor(string co);
        string getMake();
        string getModel();
        string getColor();
        int getYear();
        int getCC();
        
};  




#endif