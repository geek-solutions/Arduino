# avrdude should be installed
# fou.hex should be renamed with your actual name

avrdude -p atmega328p -P /dev/ttyACM0 -c stk500v1 -b 115200 -F -u -U flash:w:foo.hex
