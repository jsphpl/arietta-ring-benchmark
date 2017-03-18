#!/usr/bin/python

from acmepins import GPIO

pin_out = GPIO('J4.39', 'OUTPUT')  # PC0
pin_in = GPIO('J4.37', 'INPUT')    # PC1

while True:
    pin_out.digitalWrite(0 if pin_in.digitalRead() else 1)
