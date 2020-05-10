/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.
*/


/*
1)
Skateboard
5 properties:
    1) Grip tape color
    2) Hardness of Wheels
    3) Brand of Trucks
    4) Age of Bearings
    5) Type of Wood
3 things it can do:
    1) roll
    2) slide
    3) flip
 */

/*
2)
Synthesizer
5 properties:
    1) Number of Knobs
    2) Speed of LFO's
    3) Types of Filters
    4) Number of Oscillators
    5) Types of FX processor 

3 things it can do:
    1) Oscillate
    2) Play sounds
    3) Arpegiate
 */

/*
3)
Computer
5 properties:
    1) Feel of keys
    2) Resolution of Monitor
    3) Kinds of indictor lights
    4) Number of buttons
    5) Speed of Processor
3 things it can do:
    1) do taxes
    2) play music
    3) display numbers
 */

/*
4)
Midi Controller
5 properties:
    1) Number of knobs
    2) Kinds of buttons
    3) Range of faders
    4) Size of display
    5) Types of pads
3 things it can do:
    1) control synth
    2) adjust volume
    3) change bank
 */

/*
Thing 10) Car
5 properties:
    1) Brand of Radio
    2) Number of Tires
    3) Size of Engine
    4) Brand of Rims
    5) Count of Seats
3 things it can do:
    1) Drive
    2) Park
    3) Stop

Radio
    1) Frequency of Station
    2) Brightness of Display
    3) Size of Display
    4) Number of Knobs
    5) Type of Navigation System
3 things it can do:
    1) Play music
    2) Navigate the car
    3) Play the news  

Tires
5 properties:
    1) Brand 
    2) Height
    3) Width
    4) Softness
    5) Speed Rating
3 things it can do:
    1) Roll
    2) skid
    3) Squeel

Engine
5 properties:
    1) Volume
    2) Viscosity of Oil
    3) Number of Cylinders
    4) Type of Transmission
    5) Count of Spark Plugs
3 things it can do:
    1) Generate torque
    2) Produce heat
    3) Propel the car

Rims
5 properties:
    1) Height
    2) Width
    3) Type of metal
    4) Number of Nuts
    5) Color
3 things it can do:
    1) Make the care look more attractive
    2) Carry the cars weight
    3) Holds the tires

Seats
5 properties:
    1) Type of leather
    2) Angle recline
    3) Color
    4) Height
    5) Softness
3 things it can do:
    1) Recline
    2) Shift forward or back
    3) Carry a passenger
 */

 /*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
