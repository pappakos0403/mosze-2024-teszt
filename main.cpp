#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //elírt változónév
    std::cout << '1-100 ertekek duplazasa' //nincs ;
    for (int i = 0;) //hiányos for loop
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hiányos for loop
    {
        std::cout << "Ertek:" //nincs ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs kezdőérték
    for (int i = 0; i < N_ELEMENTS, i++) //, helyett ;
    {
        atlag += b[i] //nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}