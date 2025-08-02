# desc
3x3 Macropad -- custom PCB designed in KiCad and programmed in Arduino IDE using C++. This project is still in progress!!

# status
PCB & all components are here! Just have to solder everything on. the footprints for the switches are too close together (my fault), so the switches fit, but not correctly. the metal prongs for a lot of the switches don't entirely go down into the holes, so I'm afraid they are going to not solder correctly/short. yikes! now I know for next time though!!! here's some pictures:

![board image] (https://github.com/mschwedatschenko/macropad/main/pics/components.jpeg)

![raw board front] (https://github.com/mschwedatschenko/macropad/main/pics/raw-front.jpeg)

![raw board back] (https://github.com/mschwedatschenko/macropad/main/pics/raw-back.jpeg)

# purpose
After losing access to my mechanical keyboard I used for a while and just relying on my laptop's built-in keyboard, I had the desire to make my own mechanical keyboard completely from scratch. This macropad serves as a precursor to a 60% keyboard I hope to create during the upcoming academic year using a bare ATMega32U4 Microcontroller rather than an Arduino Micro, and to test the waters with the project on a smaller scale. 

It made sense to stick with the Sparkfun Pro Micro for the microcontroller for this project since I will be strictly using through-hole soldering. With the 60% project, having regular access to WPI's reflow oven will yield hopefully better results using SMT soldering (hand soldering all of the pins on the microcontroller sounds like a nightmare).

I hope to make the switches on the 60% keyboard hot-swappable. I will be using Cherry MX switches for this macropad and soldering them directly to the PCB.
https://www.digikey.com/en/products/detail/onsemi/1N4148/458603 <---- diodes for future reference
https://www.digikey.com/en/products/detail/cherry-americas-llc/MX1A-E1NW/20180 <---- switches
