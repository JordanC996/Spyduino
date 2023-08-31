# Spyduino
An example of a rubber ducky with Arduino Leonardo

## Overview

![immagine](./media/Cattura.PNG)

## install

``` git clone https://github.com/JordanC996/Spyduino.git ```

## run

build an image from dockerfile

`docker build . `

run the image

`docker container run <id-image>` 

run netcat command
`nc -lvp 4444`

run php server listening on port 80 
`php -S 172.17.0.2:80`

insert the rubber ducky in the target system!
