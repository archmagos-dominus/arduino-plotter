# arduino-plotter

## Info:
Code for an Arduino plotter using stepper motors:

This is the software half of a complete 2D plotter that comes prebuilt with functions that will help you write letters and draw some simple shapes.
I order for you to build such a project, you will require an Arduino board, an Adafruit Motor Shield board to control the motors and 2 stepper motors that will do the XY movement. 
The Arduino board and the motor shield themselves can be found in most electronics enthusiast stores, as do the electric motors (however, please note that any old stepper motor from a DVD or CD tray will work the same way, if you're willing to learn a bit about wiring and soldering).
The code is, by my standard, pretty well commented, as such any variables that you wish to modify (size of the paper, speed of writing etc.) are pretty obvious.

## Hardware Requirements:
- Arduino board
- Adafruit Motor shield 

## Software Requirements:
- Adafruit Motor Library

## Usage:
  Words are written by making calls to letter functions in the `loop()` function. This program comes prebuilt with all the letters of the english alphabet, as well as functions for resetting the pen position or to begin a new line. Shapes can be drawn as well using their respective mathematical formula (examples included in the code are circles and hearts).
