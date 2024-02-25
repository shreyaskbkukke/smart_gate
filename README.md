# Automated Gate Control System

## Overview

This Arduino project controls two gates using servo motors and IR sensors. The gates open when the openIR sensor is triggered and close when the closeIR sensor is activated. The gate state is tracked to prevent redundant operations.
![Automatic-Railway-Gate-Control-System-1-e1505989808622](https://github.com/shreyaskbkukke/smart_gate/assets/96857515/3fa07a57-d3b3-40d9-b16b-a009bf0aadad)

## Components

- 2 Servo Motors
- 2 IR Sensors
- Arduino Board

## Pin Configuration

- Gate1 Servo: Pin 10
- Gate2 Servo: Pin 9
- Open IR Sensor: Pin 5
- Close IR Sensor: Pin 6

## Usage

1. Gates are initially open.
2. When the openIR sensor is triggered, both gates open.
3. When the closeIR sensor is activated, both gates close.

## Notes

- A 3-second delay is implemented during gate opening.
- Gate2 opens in the opposite direction for enhanced control.

Feel free to modify the code to suit specific needs.
