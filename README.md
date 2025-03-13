# Arduino Smart Parking Lot System

This project implements an automated parking lot system using Arduino, featuring IR sensors, servo motors, and LED indicators. The system can detect vehicle presence and control parking barriers automatically.

## Features

- Automatic barrier control using servo motors
- IR sensor-based vehicle detection
- LED indicators for parking status
- Remote control functionality using IR remote
- Real-time status monitoring through Serial communication

## Hardware Requirements

- Arduino Board (Arduino Uno/Nano)
- 2x IR Sensors
- 2x Servo Motors
- 2x LED Indicators
- IR Remote Control
- Jumper Wires
- Breadboard (optional)

## Pin Connections

- IR Sensor 1: Pin 3
- IR Sensor 2: Pin 4
- LED 1: Pin 8
- LED 2: Pin 9
- Servo 1: Pin 5
- Servo 2: Pin 6
- IR Receiver: Pin 2

## Required Libraries

- Servo.h
- IRremote.h

## Project Structure

```
├── 00 making_with_electronics/    # Electronics assembly guide
├── 01 test_codes/                # Test code implementations
├── 02 project illuminate/        # Main project files
├── 03 circuit_diagram/          # Circuit schematics
├── 04 libraries/                # Required libraries
├── 05 report/                   # Project documentation
├── project_illuminate.ino       # Main Arduino code
└── README.md                    # Project documentation
```

## Functionality

1. **Automatic Barrier Control**:
   - Barriers open automatically when a vehicle is detected
   - Barriers close after vehicle passes through
   - LED indicators show barrier status

2. **Remote Control Operation**:
   - Manual control of barriers using IR remote
   - Remote codes:
     - 16753245: Close Barrier 1
     - 16736925: Open Barrier 1
     - 16769565: Close Barrier 2
     - 16720605: Open Barrier 2

3. **Status Indicators**:
   - LED indicators show barrier status
   - Serial monitor provides real-time feedback

## Installation

1. Install the Arduino IDE
2. Install required libraries (Servo.h and IRremote.h)
3. Connect the hardware components as per the circuit diagram
4. Upload the `project_illuminate.ino` code to your Arduino board

## Usage

1. Power on the Arduino board
2. The system will automatically detect vehicles using IR sensors
3. Barriers will open/close automatically based on vehicle presence
4. Use the IR remote for manual control if needed

## Troubleshooting

- Ensure all connections are secure
- Check if IR sensors are properly aligned
- Verify servo motor connections
- Monitor Serial output for debugging information

## Contributing

Feel free to submit issues and enhancement requests!

## License

This project is open source and available under the MIT License.
