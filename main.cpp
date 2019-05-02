#include <iostream>
#include <stdio.h>  // getchar()
#include <iomanip>  // number precision
#include "comments.h"  // LinkGenerator
#include "TimeCalculation.h"  // TimeCalculator

using namespace std;

int main()
{
    cout << "#-------------------------------------------------------------------#" << endl;
    cout << "#  Simple program for generating custom links ending with numbers.  #" << endl;
    cout << "# Generates custom number of links and saves them into a .txt file. #" << endl;
    cout << "#-------------------------------------------------------------------#" << endl;
    cout << "#          It generates links in the following template:            #" << endl;
    cout << "#               [Your custom URL text][link_number]/                #" << endl;
    cout << "#-------------------------------------------------------------------#" << endl;
    cout << "#              You can also use the default template:               #" << endl;
    cout << "#         https://comments.deviantart.com/62/[link_number]/         #" << endl;
    cout << "#-------------------------------------------------------------------#" << endl;

    Commentlink LinkGenerator; // Class; Object - new object of the type Commentlink
    TimeCalculation TimeCalculator; // Class; Object - new object of the type TimeCalculation

    LinkGenerator.Input_text(); // Object.Function - ask for the Default text to use
    LinkGenerator.Input_numbers(); // Object.Function - ask the user how many and what links to generate

    cout << endl << "Number of links to generate: " << LinkGenerator.n << endl;
    cout << "Generating links into file: generated_links.txt ..." << endl;

    TimeCalculator.TimeCalcStart(); // Object.Function - start time calculation
    LinkGenerator.Output_numbers(); // Object.Function - output links to file
    TimeCalculator.TimeCalcStop(); // Object.Function - stop time calculation

    cout << fixed << setprecision(3);

    cout << "#----------------------------------------------------#" << endl;
    cout << "#       Link generation completed successfully.      #" << endl;
    cout << "#  You can now open the 'generated_links.txt' file.  #" << endl;
    cout << "#----------------------------------------------------#" << endl;
    cout << "#               Completed in " << TimeCalculator.TimeCalculated << " s.                #" << endl;
    cout << "#----------------------------------------------------#" << endl;
    cout << "#        Written using object C++ by rezno[R]        #" << endl;
    cout << "#      Time of compilation: " << __DATE__ << " " << __TIME__ << "     #" << endl;
    cout << "#             First written: 2018.11.29              #" << endl;
    cout << "#----------------------------------------------------#" << endl;
    cout << "#         [Press Enter to close the program]         #" << endl;
    cout << "#----------------------------------------------------#" << endl;

    getchar(); getchar();

    return 0;
}
