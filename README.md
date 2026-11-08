# ⭐ Twinkl Buzzer

A small PCB project that plays **Twinkle Twinkle Little Star** using a buzzer!

I wanted to make something simple, fun, and interactive while learning more about electronics, PCB design, and how different components work together.

The idea is pretty straightforward: press the button, and the buzzer plays the melody of Twinkle Twinkle Little Star. There's also an LED as a visual indicator.

##  Features

-  A buzzer that plays Twinkle Twinkle Little Star
-  
-  A push button to activate the melody
-  
-  An LED indicator
-  
-  A compact custom-designed PCB
-  
-  A resistor to limit current through the LED

## Components & BOM

| Component | Quantity | Purpose |
|---|---:|---|
| PCB | 1 | Holds all the components and connections |
| Buzzer | 1 | Plays Twinkle Twinkle Little Star |
| LED (Red) | 1 | Visual indicator |
| Resistor 10 | 1 | Limits current through the LED |
| Push button | 1 | Activates the melody |
| Microcontroller esp32 ardiono| 1 | Controls the buzzer and LED |



## How It Works
The project uses a buzzer to produce the different notes of Twinkle Twinkle Little Star

Each note has a different frequency, which is controlled through the program. The notes are played one after another to create the melody

When the button is pressed, the program triggers the song, and the LED acts as a visual indicator
## Programming

The melody is created by programming individual musical notes and their durations

The code controls:
- The frequency of each note
- How long each note plays
- The pauses between notes
- The button input
- The LED indicator

##  PCB Design

The PCB was designed in KiCad. I arranged the components and routed the connections to bring the circuit together into one board.

##  What I Learned

Through this project, I got to explore:
- PCB design and component placement.
- How buzzers produce different tones.
- How resistors work in a circuit.
- How push buttons interact with electronic circuits.
- Connecting hardware with code.

This is a small project, but it's another step in learning how to turn an idea into something physical!

