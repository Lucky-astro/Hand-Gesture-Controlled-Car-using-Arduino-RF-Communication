# Hand-Gesture-Controlled-Car-using-Arduino-RF-Communication
A fully working gesture-controlled robotic car built using Arduino UNO, RF modules, L293D motor driver, and a gesture sensor glove. The car receives wireless signals based on hand movements and responds with real-time motion such as Forward, Backward, Left, Right, and Stop.  This project demonstrates wireless communication, sensor 
⭐ Project Features

Hand gestures control the robotic car wirelessly

RF 433 MHz communication for long-range control

Custom gesture-sense glove with sensor board

Real-time control: Forward, Backward, Left, Right

L293D motor driver for high-current motor control

Dual-motor differential drive robot

Fully implemented using Arduino IDE

🧱 Hardware Components Used
Transmitter (Glove Unit)

Arduino UNO

Gesture Sensor Board (4-channel analog gesture module)

RF 433 MHz Transmitter

Connecting Wires

9V Battery / Power supply

Hand Glove (for mounting components)

Receiver (Car Unit)

Arduino UNO

RF 433 MHz Receiver

L293D Motor Driver Module

2× BO Motors

2× Robot Wheels

Chassis Plate

Battery Pack (7.4V or 12V for motors)

Jumper Wires

📡 How It Works
1️⃣ Gesture Detection

The glove-mounted gesture board measures hand orientation.
Each movement changes the analog values on pins A0–A3 of the transmitter Arduino.

2️⃣ Wireless Transmission

The transmitter Arduino encodes the detected gesture and sends it through the 433 MHz RF transmitter.

3️⃣ Wireless Reception

The car’s Arduino receives the encoded signal via the 433 MHz RF receiver connected to pin D11.

4️⃣ Motor Control

Based on the received gesture:

Gesture	Action
Hand Forward	Car moves Forward
Hand Backward	Car moves Backward
Hand Left	Car turns Left
Hand Right	Car turns Right
Neutral	Car Stops

The L293D driver controls the left and right motors accordingly.
