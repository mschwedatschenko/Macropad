# 3x3 Macropad Custom PCB 
This PCB was designed in KiCad and programmed in Arduino IDE using C++. I used OSHPark as my manufacturer of choice, and got some beautiful purple PCBs with ENIG surface finish. The Macropad acts as a HID, with each key representing a number 1-9. These keys can be programmed to be anything the user wants.

## Pictures

![board image](https://github.com/mschwedatschenko/macropad/blob/main/pics/top-view.jpeg)

![board side](https://github.com/mschwedatschenko/macropad/blob/main/pics/side-view.jpeg)

![raw board front](https://github.com/mschwedatschenko/macropad/blob/main/pics/raw-front.jpeg)

![raw board back](https://github.com/mschwedatschenko/macropad/blob/main/pics/raw-back.jpeg)

Here's the schematic of my design:

![schematic](https://github.com/mschwedatschenko/macropad/blob/main/pics/macropad_schematic.png)

Here's the PCB layout of my design:

![layout](https://github.com/mschwedatschenko/macropad/blob/main/pics/macropad_layout.png)

## Notes
I made the switch footprints far too close to one another, so I had to sand down the switches in order for them to be soldered correctly. This design does not support keycaps. Additionally, future iterations should include the Arduino Micro on the board itself, as it is a pain to have the Arduino Micro hanging off.

I'm currently in the process of making a 60% Keyboard PCB. 

## Purpose
After losing access to my mechanical keyboard I used for a while and just relying on my laptop's built-in keyboard, I had the desire to make my own mechanical keyboard completely from scratch. This macropad serves as a precursor to a 60% keyboard I hope to create during this academic year using a bare ATMega32U4 Microcontroller rather than an Arduino Micro, and to test the waters with the project on a smaller scale. 

It made sense to stick with the Arduino Micro for the microcontroller for this project since I will be strictly using through-hole soldering. With the 60% project, having regular access to WPI's reflow oven will yield hopefully better results using SMT soldering (hand soldering all of the pins on the microcontroller sounds like a nightmare).

I hope to make the switches on the 60% keyboard hot-swappable. I used Cherry MX switches for this macropad and soldered them directly to the PCB.

## BOM
Arduino Micro (alternative knockoff linked here)
https://www.amazon.com/dp/B0B6HYLC44?ref=ppx_yo2ov_dt_b_fed_asin_title 

9x THT Diodes
https://www.digikey.com/en/products/detail/onsemi/1N4148/458603 

9x Cherry MX Switches
https://www.digikey.com/en/products/detail/cherry-americas-llc/MX1A-E1NW/20180

1x 2x12 Pin Header
https://www.mouser.com/ProductDetail/Amphenol-FCI/67996-126HLF?qs=zh4O8xspOuwM2BHmqRMfPg%3D%3D&countryCode=US&currencyCode=USD 

Female to Female Jumper Wires
https://www.amazon.com/California-JOS-Breadboard-Optional-Multicolored/dp/B0BRTKTV64?crid=1LACSR79FHSYC&dib=eyJ2IjoiMSJ9.ibSfPMW-D8UnuoyT0yyf3D_lk7qt6Xtf-hseYz3CHE_PSs4KAuAkM15Fy0qTHeL-0sbmZ6xvudwt1mH7ECdw52J8qVeg-_UcOEXbhjt0zu6y_XCODlAWuh6MgwS7A1VJKjYsNmwjxwCTXuMRC-D0OfljqHtJ6zQDzKQ3gSM8hIwX8KOZwJewJkuHyeDDnSRg3klQF3WwJ22bo-lTGaa8bweF99vKP4XyfbRqS5AhPqo.L_8eHglXmOdtWOBj3pQvrHvJbkccanVmh4Z13YR6j0w&dib_tag=se&keywords=jumper%2Bwires%2Bfemale%2Bto%2Bfemale&qid=1765915770&sprefix=jumper%2Bwires%2Bfemale%2Bto%2Bfemale%2Caps%2C134&sr=8-5&th=1