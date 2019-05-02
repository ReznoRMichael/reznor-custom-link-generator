#include <iostream>
#include <cstring> // strcpy() / string
using namespace std;

class Commentlink
{
    unsigned long long int number_bigger;  // wiekszy nr linku
    unsigned long long int number_smaller; // mniejszy nr linku
    //unsigned long long number_leading; // nr glowny linku
    unsigned long long int link_number; // numer umieszczany w linku
    string custom_text;

public:

    unsigned int n;  // ilosc linkow do wygenerowania

    void Input_text();

    void Input_numbers();

    void Output_numbers();
};
