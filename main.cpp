/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.







//1)

struct Skateboard
{
    std::string gripTapeColor; //= "Green";
    int wheelsHardness; //= 99;
    std::string truckBrand; //= "Independent";
    int bearingAgeYears; //= 2;
    std::string woodType; //= "oak";
    Skateboard();

    float rollDownStreet(int speed); //returns how far you roll
    double railSlide(bool frontSide = true, double velocity = 10, double friction = 10); //returns the distance slid
    bool kickFlip(int degree = 360); //returns true if the kickflip was successfully performed.
};

Skateboard::Skateboard()
{
    gripTapeColor = "Green";
    wheelsHardness = 0;
    truckBrand = "Independent";
    bearingAgeYears = 0;
    woodType = "oak";
}

float Skateboard::rollDownStreet(int speed)
{
    if (speed > 20)
    {
        std::cout << "Slow Down\n.";
    }
    else
    {
        std::cout << "That's a good speed.\n";
    }
    return speed; 
}

double Skateboard::railSlide(bool frontSide, double velocity, double friction)
{
    if (frontSide)
    {
        std::cout << "Now try it backside, dude!\n.";
    }
    else
    {
        std::cout << "Now try it frontside, dude!\n.";
    }
    return velocity + friction;
}

bool Skateboard::kickFlip(int degree)
{
    if (degree == 360)
    {
        std::cout << "rad!\n.";
        return true;
    }
    return false;
}

/*    Skateboard skate;              //3) instantiating a UDT named 'foo' in main()
    skate.rollDownStreet(19);     //4) calling a member function of the UDT instance.
    //return 0;
*/



struct Car
{
    std::string radioBrand = "Sony";
    int numTires = 4;
    int engineSize = 4600;
    std::string rimBrand = "MSR";
    int seatCount = 2;
    Car();
    int drive(int speed, int time);    //returns how far you drove
    void park(int parkingStallNumber);
    bool stop(int stopDistance); //returns true if you stopped in time.
};

Car::Car()
{
    radioBrand = "Sony";
    numTires = 4;
    engineSize = 4600;
    rimBrand = "MSR";
    seatCount = 2;
}

int Car::drive(int speed, int time)
{
    std::cout << "Your distance is " << speed * time << ".\n";
    return speed * time;
}

void Car::park(int parkingStallNumber)
{
    if (parkingStallNumber == 3)
    {
        std::cout << "Parking Stall" << parkingStallNumber << "is not paid\n.";
    }
}
bool Car::stop(int stopDistance)
{
    if (stopDistance >= 30)
    {
        std::cout << "Crash!\n.";
        return false;
    }
    return true;
}

struct Computer
{
    int keyFeel = 2;
    int monitorResolution = 1080;
    std::string indicatorLightKind = "LED";
    int buttonCount = 3;
    float processorSpeed = 4.0f;
    Computer();

    bool runQuickbooks(bool isQbInstalled = true); //returns true if it ran successfully
    bool playMusic(int howLoud = 11); //returns true if hearing damage occurred
    void displayVolume(int loudness = 1);
};

Computer::Computer()
{
    keyFeel = 2;
    monitorResolution = 1080;
    indicatorLightKind = "LED";
    buttonCount = 3;
    processorSpeed = 4.0f; 
}

bool Computer::runQuickbooks(bool isQBInstalled)
{
    if (isQBInstalled == false)
    {
        return false;
    }
    return true;
}

void Computer::displayVolume(int loudness)
{
    std::cout << "You have turned up the volume to " << loudness << ".\n";  
}
bool Computer::playMusic(int howLoud)
{
    int loudness;
    if (howLoud == 11)
    {
        return true;
    }
    loudness = 0; //there is only one loudness and that's 11 or turn it off!!!!
    return false;
}
//4)
struct MidiController
{
    int knobCount = 16;
    char buttonStyle = 'l';
    int faderRange = 10;
    float displaySizeInches = 7.2f;
    std::string padType = "lit";
    MidiController();

    void controlSynth(int midiMessage);
    float adjustVolume(int midiMessage = 7); //returns the volume level in decibels
    void changeBank(int bankNumber);
};

MidiController::MidiController()
{
    knobCount = 16;
    buttonStyle = 'l';
    faderRange = 10;
    displaySizeInches = 7.2f;
    padType = "lit";
}

void MidiController::controlSynth(int midiMessage)
{
    if (midiMessage == 74)
    {
        std::cout << "cut off adjusting\n.";
    }
}

float MidiController::adjustVolume(int midiMessage)
{
    if (midiMessage == 7)
    {
        return faderRange;
    }
    return 0.1f;
}

void MidiController::changeBank(int bankNumber)
{
    std::cout << "Bank " << bankNumber << " selected.\n";
}

//Thing 5) 
struct Filter
{
    std::string filterType = "LP";
    float maxCutOffFreq = 20000.0F;
    int rezAmount = 1; //1-100
    int modAmount = 1; //1-100
    float cutOffFrequency;
    float freqRangeRemaining =0.0f;

    Filter();
    void getSoundTone(float newCutOffFrequency);
    int addResonance(int rezAmount, int resonance); //returns the total resonance amount
    void cutLowFreq(float cutOffFrequency = 1000.0f);
};

Filter::Filter()
{
    filterType = "LP";
    maxCutOffFreq = 20000.0F;
    rezAmount = 1; //1-100
    modAmount = 1; //1-100
    cutOffFrequency = 0.0f;
    freqRangeRemaining = 0.0f;
}
 
void Filter::getSoundTone(float newCutOffFrequency)
{
    if (newCutOffFrequency < maxCutOffFreq)
    {
        freqRangeRemaining = (maxCutOffFreq - newCutOffFrequency);
        std::cout << freqRangeRemaining << std::endl;
    }
    else
    {
        std::cout << "You are at max cutoff" << std::endl;
    } 
    newCutOffFrequency = cutOffFrequency; //setting new cut off to cut off.  Will this get erased by the constructor?
}
void addResonance(int rezAmount, int resonance)
{
    rezAmount = 2;
    resonance = resonance + rezAmount;
}




//Thing 6) 
struct Oscillator
{
    int oscOutput = 1; //1-10
    int waveType = 1; //1=sine 2=saw 3=square
    int maxPitchChange = 24; //semitones
    bool syncOn = false;
    int maxVolume = 1; //1-11
    Oscillator();

    float osc2Mod(bool osc2ModActive = false); //returns the new OSC output value.    
    void signalGen(int frequency);
    float convertVoltage(bool voltageCovertActive, float resistance, float current); //returns the converted voltage level
};

Oscillator::Oscillator()
{
    oscOutput = 1; //1-10
    waveType = 1; //1=sine 2=saw 3=square
    maxPitchChange = 24; //semitones
    syncOn = false;
    maxVolume = 1; //1-11
}

float Oscillator::osc2Mod(bool osc2ModActive)
{
    if (osc2ModActive == true)
    {
        std::cout << "Oscillator 1 modulated by Oscillator 2. Frequency 33.3.\n";
        return 33.3f;
    }
    std::cout << "No modulation. Frequency 0.0.\n";
    return 0.0f;
      
}

void Oscillator::signalGen(int frequency)
{
    if (syncOn == true)
    {
        std::cout << frequency;
    }
}

float Oscillator::convertVoltage(bool voltageConvertActive, float resistance, float current)
{
    if (voltageConvertActive == true)
    {
        return resistance * current;
    }
    return 0.0f;
}



//Thing 7) 
struct LFO
{
    int waveType = 1; //1=sine 2=saw 3=square
    float LfoRate = 20.0f;
    int phaseStartPos = 1;  //1-100
    bool syncOn = false;
    bool bipolarOn = true;
    
    float modulateCutoff(float lfoRate, bool syncOn = false); //returns filter frequency after being modulated    
    float changePitch(float pitchChangeAmount, float pitch); //returns new pitch, expressed in Hertz
    void adjustFrequency(int freqHz);
    LFO();
};

LFO::LFO()
{
    waveType = 1; //1=sine 2=saw 3=square
    LfoRate = 20.0f;
    phaseStartPos = 1;  //1-100
    syncOn = false;
    bipolarOn = true;
}



float LFO::modulateCutoff(float lfoRate, bool syncOff)
{
    if (syncOff == true)
    {
        return lfoRate * phaseStartPos;//10;
    }
    return lfoRate;
}
//lfo1.changePitch(12, 36);
float LFO::changePitch(float pitchChangeAmount, float pitch)
{  
    std::cout << "New pitch is " << pitch + pitchChangeAmount << ".\n" ;
    return pitch + pitchChangeAmount; 
}

void LFO::adjustFrequency(int freqHz)
{
    std::cout << freqHz;
}


//Thing 8) 
struct Display
{
    int screenRes = 1080;
    int pixelSize = 2;
    float displayWidth = 7.2f;
    char displayColor = 'b'; //b = blue r = red
    int displayTechnology = 'L';//L for LED; O for OLED
    Display();
    int electricUsed;
    
    void displaySettings(char newDisplayColor);
    bool energyConsumption(int wattsUsed); //returns true if it triggers a blown fuse.
    float displayBritenessDim (bool powerSaver = true, int lumens = 100, int hoursOn = 1); //returns the power consumed at this new brightness level
};

Display::Display()
{
    screenRes = 1080;
    pixelSize = 2;
    displayWidth = 7.2f;
    displayColor = 'b'; //b = blue r = red
    displayTechnology = 'L';//L for LED; O for OLED
    electricUsed =0;
    
} 

void Display::displaySettings(char newDisplayColor)
{
    if (displayTechnology == 'L') 
    {
        newDisplayColor = 'r';
    }
    else
    {
        newDisplayColor = 'b';
    } 
}
float Display::displayBritenessDim (bool powerSaver, int watts, int hoursOn)
{
    electricUsed = watts * hoursOn;
    if (powerSaver == true)
    {
        std::cout << "Powersaver on.\n";
        
    }
    else
    {
        std::cout << "You have used " << electricUsed << " today. Turn off you computer. \n";
    }
    return electricUsed;
}

bool Display::energyConsumption(int wattsUsed)
{
    return wattsUsed > 100;
}


//Thing 9) 
struct FXSection
{
    float reverbAmount = 50;
    int distAmount = 1;
    int delayWetSignal = 50;
    int delayType = 1; //1 = pingpong 2 = tape
    int reverbTypeA = 1; //1 = plate 2 = spring
    FXSection();

    void delayActive(bool delayOn, int wetSignalChange);     
    int delayTypeOut(int delayType); 
    void saturationActive(int distAmount2, bool active);
};

FXSection::FXSection()
{
    reverbAmount = 50;
    distAmount = 1;
    delayWetSignal = 50;
    delayType = 1; //1 = pingpong 2 = tape
    reverbTypeA = 1; //1 = plate 2 = spring
}
int FXSection::delayTypeOut(int delayTypeSelector) 
{
    if (delayTypeSelector == 1)
    {
        std::cout << "PingPong Delay \n";
        delayType = 1;
    }
    else
    {
        std::cout << "Tape Delay \n";
        delayType = 2;
    }
    return delayType;
}
void FXSection::delayActive(bool delayOn, int wetSignalChange)
{
    if (delayOn == true)
    {
        delayWetSignal += wetSignalChange;
        std::cout << "delay type is " << delayType <<std::endl;//i want to nest the previous function here so it says Ping Pong or Tape Delay here instead of the int.
        std::cout << "WetSignal = " << delayWetSignal << std::endl;
    }
    else
        std::cout << "Delay inactive.\n";
}


void FXSection::saturationActive(int distAmount2, bool active)
{
    distAmount2 = 50;
    active = false;
}

//Thing 10) 
struct Synthesizer
{
    Filter filterA;
    LFO lfo1;
    Oscillator osc1;
    Display display;
    FXSection fxtab1;
   
    void sequenceNotesOn();
    float playSound(int soundNum, float numSamplesToPlay, float volumeLevel); //returns the volume level in decibels
    void handleKeyPress(int keyNumPressed);
    void synthOutput(int style = 1); //1=up 2=down
};

void Synthesizer::sequenceNotesOn()
{
    filterA.cutOffFrequency = 20.0f;
    lfo1.bipolarOn = true;
    lfo1.waveType = 1; //1=sine 2=saw 3=square
    lfo1.LfoRate = 20.0f;
    lfo1.phaseStartPos = 50;  //1-100
    lfo1.syncOn = true;
    lfo1.bipolarOn = true;
}

float Synthesizer::playSound(int soundNum, float numSamplesToPlay, float volumeLevel)
{
    /*
    this should decide WHICH sound is played.
    it shouldn't rely on whether or not the key is key is presed. 

    it's the other way around. 

    if you press the key, you playSound()

    Now, those function arguments make sense based on WHICH KEY you press.   

    Press Middle C?   play soundNum 35
    Press G5?  Play sound num whatever...

    */

    std::cout << "you played the sound: " << soundNum;
    std::cout << " for " << numSamplesToPlay << " samples,";
    std::cout << " at a volume level of " << volumeLevel << "\n";
    return volumeLevel;
}

void Synthesizer::handleKeyPress(int keyNumPressed)
{
    if( keyNumPressed == 64 )
    {
        playSound(35, 2048, 0.5);
    }
    else if( keyNumPressed == 66 )
    {
        playSound( 48, 1024, 0.75);
    }
    else
    {
        playSound( keyNumPressed, 512, 1.f );
    }
}

void Synthesizer::synthOutput(int style)
{
    if( style == 1)
    {
        sequenceNotesOn();
        playSound(44,444,333);
        lfo1.changePitch(10.2f,2.2f);
        
    }
    else
    {
        sequenceNotesOn();
        playSound(33,22,333);
        lfo1.changePitch(11.2f,5.2f);
        
    }
        
}
 /*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */


int main()
{
    Example::main();
    Skateboard skate;  //3) instantiating a UDT named 'skate' in main()
    skate.rollDownStreet(19);     //4) calling a member function of the UDT instance.
    Car car;  
    car.drive(1,2);    
    car.drive(10,5); 
    Computer c; //instantiating a UDT named "c"
    c.displayVolume(11); //calling a member function of the UDT instance
    MidiController fatboy;
    fatboy.changeBank(16);
    Filter f;
    f.getSoundTone(210.f);
    f.getSoundTone(20000.f);
    Oscillator o; 
    o.osc2Mod( true );
    o.osc2Mod( false );
    LFO lfo1;
    lfo1.changePitch(12, 36);
    lfo1.changePitch(36, -12);
    Display display1;
    display1. displayBritenessDim (true, 10, 10);
    display1. displayBritenessDim (false, 200, 10);
    FXSection fx1;
    fx1.delayTypeOut(2);
    fx1.delayActive(true,25);
    fx1.delayTypeOut(1);
    fx1.delayActive(true,-25); //takes previous
    fx1.delayTypeOut(1);
    fx1.delayActive(false,-25); //takes previous

    Synthesizer synth;
    synth.handleKeyPress(64);
    synth.handleKeyPress(66);
    synth.handleKeyPress(33);
    

    std::cout << "good to go!" << std::endl;
}

