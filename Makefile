SRC=$(TARGET).cpp
SRC+=Led.cpp

compile: $(TARGET).cpp
	avr-g++ -mmcu=atmega32 -Os -o $(TARGET).o $(SRC)
	avr-objcopy -j .text -j .data -O ihex $(TARGET).o  $(TARGET).hex
clean:
	@rm $(TARGET).hex $(TARGET).o
	@echo "done"