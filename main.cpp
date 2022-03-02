#include "Motorcycle.h"
#include "Guest.h"
#include <iostream>
#include <string>
using namespace std;

//discounts are applied to in-state guests, and motorcycles 50 CC
int main()
{  
    
    string name, email, address, location, make, model,color;
    int age, year, cc;
    Motorcycle vehicle;
    Guest guest;
    

    //gettting user input
    cout << "Enter age: ";
    cin >> age;
    guest.setAge(age); 

    cin.ignore();
    cout << "Enter name: ";
    getline(cin, name);
    guest.setName(name);

    cout << "Enter email: ";
    getline(cin, email);
    guest.setEmail(email);


    cout << "Enter address: ";
    getline(cin, address);
    guest.setAddress(address);

    cout << "Enter location: ";
    getline(cin, location);
    guest.setLocation(location); 


    cout << "Enter make: ";
    getline(cin, make);
    vehicle.setMake(make);

    cout << "Enter model: ";
    getline(cin, model);
    vehicle.setModel(model);

    cout << "Enter color: ";
    getline(cin, color);
    vehicle.setColor(color);

    cout << "Enter Year: ";
    cin >> year;
    vehicle.setYear(year);

    cout << "Enter CC: ";
    cin >> cc; 
    vehicle.setCC(cc);

    cout << "Guest data" << age << name << email << address << location << endl;
    cout << "Vehicle data" << make << model << color << year << cc << endl;
    
}   