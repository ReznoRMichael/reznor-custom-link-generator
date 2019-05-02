#include "comments.h"
#include <iostream>
#include <fstream>

using namespace std;

void Commentlink::Input_text()
{
    cout << "Enter your custom link text [optional, type 0 to use Default text]: " << endl;
    cout << "[ Default text = https://comments.deviantart.com/62/ ]" << endl;
    cin >> custom_text;
}

void Commentlink::Input_numbers()
{
    //cout << "Enter the (optional) [leading_number]:" << endl;
    //cin >> number_leading;

    cout << "Enter the starting [link_number]: ";
    cin >> number_smaller;
    cout << "Enter the ending [link_number]" << endl;
    cout << "[ Must be bigger than starting link_number ]: ";
    cin >> number_bigger;

    while (number_bigger<number_smaller)
    {
        cout << "Ending number should be _bigger_ than the starting number!" << endl;
        cout << "Please enter a bigger number: ";
        cin >> number_bigger;
    }

    n = ((number_bigger - number_smaller) + 1);
    link_number = number_smaller;
}

void Commentlink::Output_numbers()
{
    fstream textfile;
    textfile.open("generated_links.txt", ios::out);

    if(custom_text == "0") { custom_text = "https://comments.deviantart.com/62/"; }
    //if(number_leading) { custom_text += number_leading; custom_text += "/"; }

    for (unsigned int i=0; i<n; i++)
    {
        textfile << custom_text << link_number++ << "/" << endl;
    }
    textfile.close();
}

