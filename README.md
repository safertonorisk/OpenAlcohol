# OpenAlcohol
Due to the COVID-19 pandemic, a handsfree, simple, wall-attached alcohol dispenser was designed to help prevent further contamination and help people disinfect without holding the container of the disinfectant. This is an open source creation and you may use this for designing your own handsfree disinfectant dispenser.

This is advised to be used in public places, medical facilities.


<h3> Materials </h3>
<h6> Hardware</h6>
<ul>
  <li>Arduino Uno (or Nano)</li>
  <li>Solenoid Valve (Alternatives: Pump, or coils + neodymium magnet + creativity)</li>
  <li>Ultrasonic Sensor</li>
  <li>Relay Switch</li>
  <li>Wires</li>
  <li>Plastic Container (Optional)</li>
</ul>

<h6> Software</h6>
<ul>
  <li>Arduino IDE</li>
  <li><a href="https://bitbucket.org/teckel12/arduino-new-ping/downloads/">NewPing</a> Library</li>
</ul>
<h6> Power Supply</h6>
<ul>
  <li>5V</li>
</ul>

<h3>Pin Configuration</h3>
<ul>
  <li>Arduino D2 - Relay Coil SIG</li>
  <li>Arduino D7 - Ultrasonic ECHO</li>
  <li>Arduino D8 - Ultrasonic TRIG</li>
  <li>Arduino GND - Relay Coil GND, Ultrasonic GND, Pump/Valve GND</li>
  <li>Arduino 5V - Ultrasonic VCC, Relay COMMON PORT</li>
  <li>Relay NC - Pump/Valve VCC</li>
</ul>

<h3>Installation</h3>
<h6> Hardware</h6>
<ul>
  <li>Connect wires according to the diagram:</li>
  <img src="Hardware/Fritzing Schematics.PNG"/>
  <li>Connect data/power cord to Arduino and upload to Arduino.</li>
  <li>Attach the solenoid valve/pump to the alcohol container</li>
  <li>Use foam tape to attach to smooth wall/door surface.</li>
  <li>Reconnect power cord to power supply</li>
</ul>

<h6> Software</h6>
Download and open the Arduino sketch in the Software folder of this repository using Arduino IDE. Install the NewPing.h in your Arduino IDE. This is done by going to <b>Sketch > Include Library > Add .ZIP File </b> and choose the zip file downloaded. Choose the correct COM port for the Arduino and upload sketch.
