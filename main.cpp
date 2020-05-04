/*
Project 3 - Part 1b / 5
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

1)  Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
        a) For each plain-english UDT, write out 5 traits or properties and 3 things it can do
        b) remember: these properties will eventually become primitives
*/

/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior



    Notice that I did not use "has a vacuum cleaner" or "Has eco-friendly cleaning supplies" as one of the properties
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
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



#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
