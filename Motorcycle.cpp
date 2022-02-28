#include "Motorcycle.h"
#include <string>

bool Motorcycle::setMake(string ma)
{
    if(!ma.empty())
    {  
        make = ma;
        return true;
    }
    return false; 
}

bool Motorcycle::setModel(string mo)
{
    if(!mo.empty())
    {
        model = mo;
        return true;
    }
    return false; 
} 

bool Motorcycle::setColor(string co)
{
    if(!co.empty())
    {
        color = co;
        return true;
    }
    return false;
}

bool Motorcycle::setYear(int y)
{
    if( y > 0)
    {
        year = y;
        return true;
    }
    return false;
}

bool Motorcycle::setCC(int c)
{
    if(c > 0)
    {
        cc = c;
        return true;
    }
    return false; 
}


