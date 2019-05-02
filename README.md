# Reznor custom link generator
> Simple program in Object C++ (using Classes and member functions)

## General info
Program that I've first written in procedural C++, and then rewritten using Classes and a Timer specifically for myself for generating deviantart comments links and saving them into text file. This version is an evolution from the [previous one](https://github.com/ReznoRMichael/reznor-deviantart-comments-link-generator-object) and now can also generate custom user links that are ending in a number.
It generates links in the following template:
`[Your custom URL text][link_number]/`
You can also use the default template:
`https://comments.deviantart.com/62/[link_number]/`
It asks the user for the custom link text - if you type "0" it will use the default text. Then it asks the user for the starting `[link_number]`, then for the ending `[link_number]`. Then it calculates how many links it will generate, starts the timer, and begins saving all the links into `generated_links.txt` file. After the saving is completed, it stops the timer, and calculates the time it took to generate and save the file. Then the user is presented with a thank you screen with the time it took and time of file compilation as a bonus. Then it's waiting for user input to end the program.
The numbers are saved in a `unsigned long long int` type so they can store really big numbers - up to 18,446,744,073,709,551,615.

## Technologies
* Object C++
* CodeBlocks (IDE)
* GNU GCC Compiler (minGW)

## Contact
Written by [ReznoRMichael](https://github.com/ReznoRMichael) - 2019