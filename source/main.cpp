#include <avr/io.h>
#include <util/delay.h>
#include "SevenSegment.h"

int main(void) {
  SevenSegment seg7;
  seg7.init();
    while(1) {
      for (uint8_t i=0; i<10; i++) {
      seg7.display(i);
      _delay_ms(500);
      }
    }
}