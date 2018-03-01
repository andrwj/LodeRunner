#pragma once

#include "../utils/Arduboy2Ext.h"
#include "../utils/Utils.h"
#include "../utils/Enums.h"

const uint8_t PROGMEM test[] = {

    0x0a, 0x0c,         // Player starting postion ..

    0x00,               // Number of enemies
//    0x0C, 0x09,         // Enemy 1

    0x06, 0x06,         // Rentry point 1 (cell X, cell y) ..
    0x06, 0x06,         // Rentry point 2
    0x06, 0x06,         // Rentry point 3
    0x06, 0x06,         // Rentry point 4

    0x04,               // Level ladder element count ..
    0x12, 0x00,
    0x12, 0x01,
    0x12, 0x02,
    0x12, 0x03,

 //   0     0     0     0     0     0     0     0     1     1     1     1     1     1
 //   0     2     4     6     8     A     C     E     0     2     4     6     8     A  
    0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // 00
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // 01
    0x11, 0x11, 0x11, 0x13, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // 02
    0x00, 0x00, 0x00, 0x03, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x06, 0x00, 0x00,  // 03
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x11, 0x30, 0x00, 0x11, 0x11, 0x11, 0x13, 0x11,  // 04
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x11, 0x30, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // 05
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x11, 0x30, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // 06
    0x11, 0x31, 0x11, 0x11, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x31, 0x11, 0x11, 0x11,  // 07
    0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,  // 08
    0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,  // 09
    0x11, 0x11, 0x11, 0x11, 0x13, 0x11, 0x11, 0x11, 0x11, 0x11, 0x30, 0x00, 0x00, 0x00,  // 0A
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,  // 0B
    0x00, 0x00, 0x00, 0x00, 0x03, 0x44, 0x44, 0x44, 0x44, 0x44, 0x30, 0x00, 0x00, 0x00,  // 0C
    0x00, 0x00, 0x31, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x13,  // 0D
    0x00, 0x00, 0x30, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,  // 0E
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,  // 0F

};

const uint8_t PROGMEM level1[] = {
    
    0x0F, 0x0E,         // Player starting postion ..

    0x03,               // Number of enemies
    0x05, 0x06,         // Enemy 1
    0x17, 0x06,         // Enemy 2
    0x0E, 0x09,         // Enemy 3

    0x01, 0x01,         // Rentry point 1 (cell X, cell y) ..
    0x14, 0x04,         // Rentry point 2
    0x06, 0x01,         // Rentry point 3
    0x11, 0x06,         // Rentry point 4

    0x04,               // Level ladder element count ..
    0x12, 0x00,
    0x12, 0x01,
    0x12, 0x02,
    0x12, 0x03,

//    0     0     0     0     0     0     0     0     1     1     1     1     1     1
//    0     2     4     6     8     A     C     E     0     2     4     6     8     A  
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // 00
    0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // 01
    0x11, 0x11, 0x11, 0x13, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // 02
    0x00, 0x00, 0x00, 0x03, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x06, 0x00, 0x00,  // 03
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x11, 0x30, 0x00, 0x11, 0x11, 0x11, 0x13, 0x11,  // 04
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x11, 0x30, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // 05
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x11, 0x30, 0x00, 0x00, 0x00, 0x60, 0x03, 0x00,  // 06
    0x11, 0x31, 0x11, 0x11, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x31, 0x11, 0x11, 0x11,  // 07
    0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,  // 08
    0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,  // 09
    0x11, 0x11, 0x11, 0x11, 0x13, 0x11, 0x11, 0x11, 0x11, 0x11, 0x30, 0x00, 0x00, 0x00,  // 0A
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,  // 0B
    0x00, 0x00, 0x00, 0x06, 0x03, 0x44, 0x44, 0x44, 0x44, 0x44, 0x30, 0x00, 0x60, 0x00,  // 0C
    0x00, 0x00, 0x31, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x13,  // 0D
    0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03,  // 0E
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,  // 0F

};

const uint8_t PROGMEM level2[] = {
    
    0x0C, 0x0E,         // Player starting postion ..

    0x03,               // Number of enemies
    0x04, 0x03,
    0x14, 0x05,
    0x04, 0x08, 

    0x02, 0x00,         // Rentry point 1 (cell X, cell y) ..
    0x19, 0x02,         // Rentry point 2
    0x04, 0x03,         // Rentry point 3
    0x14, 0x05,         // Rentry point 4

    0x02,               // Level ladder element count ..
    0x1B, 0x04,
    0x1B, 0x05,

//    0     0     0     0     0     0     0     0     1     1     1     1     1     1
//    0     2     4     6     8     A     C     E     0     2     4     6     8     A  
    0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, // 00	
    0x32, 0x21, 0x22, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x03, // 01	
    0x30, 0x00, 0x00, 0x30, 0x00, 0x03, 0x11, 0x11, 0x11, 0x11, 0x13, 0x06, 0x00, 0x03, // 02	
    0x30, 0x60, 0x00, 0x30, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x11, 0x11, 0x53, // 03	
    0x31, 0x21, 0x21, 0x30, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // 04	
    0x30, 0x00, 0x00, 0x34, 0x44, 0x43, 0x44, 0x44, 0x44, 0x00, 0x03, 0x00, 0x00, 0x00, // 05	
    0x30, 0x00, 0x00, 0x30, 0x00, 0x03, 0x00, 0x00, 0x03, 0x11, 0x12, 0x22, 0x22, 0x23, // 06	
    0x30, 0x00, 0x00, 0x30, 0x00, 0x03, 0x00, 0x60, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, // 07	
    0x30, 0x00, 0x00, 0x30, 0x60, 0x03, 0x11, 0x11, 0x13, 0x00, 0x00, 0x00, 0x00, 0x03, // 08	
    0x21, 0x11, 0x21, 0x12, 0x11, 0x23, 0x00, 0x00, 0x00, 0x00, 0x03, 0x11, 0x13, 0x11, // 09	
    0x21, 0x11, 0x20, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, // 0A	
    0x26, 0x00, 0x20, 0x00, 0x00, 0x03, 0x00, 0x04, 0x44, 0x44, 0x43, 0x00, 0x03, 0x06, // 0B	
    0x11, 0x11, 0x11, 0x11, 0x31, 0x11, 0x22, 0x22, 0x00, 0x00, 0x03, 0x00, 0x11, 0x11, // 0C	
    0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // 0D	
    0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // 0E	
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, // 0F	

};

const uint8_t PROGMEM level3[] = {
    
    0x0A, 0x0E,         // Player starting postion ..

    0x03,               // Number of enemies
    0x07, 0x04,
    0x0F, 0x07,
    0x13, 0x09, 

    0x01, 0x02,         // Rentry point 1 (cell X, cell y) ..
    0x0B, 0x01,         // Rentry point 2
    0x13, 0x01,         // Rentry point 3
    0x1B, 0x0B,         // Rentry point 4

    0x03,               // Level ladder element count ..
    0x1B, 0x00,
    0x1B, 0x01,
    0x1B, 0x02,

//    0     0     0     0     0     0     0     0     1     1     1     1     1     1
//    0     2     4     6     8     A     C     E     0     2     4     6     8     A  
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 00
    0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 01
    0x30, 0x60, 0x00, 0x00, 0x03, 0x11, 0x11, 0x11, 0x11, 0x11, 0x30, 0x00, 0x00, 0x00, // 02
    0x11, 0x11, 0x13, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x22, 0x22, 0x22, // 03
    0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x60, 0x00, 0x30, 0x00, 0x00, 0x00, // 04
    0x00, 0x00, 0x03, 0x11, 0x11, 0x11, 0x31, 0x11, 0x11, 0x31, 0x10, 0x00, 0x00, 0x00, // 05
    0x00, 0x60, 0x03, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x04, 0x40, 0x00, 0x00, // 06
    0x11, 0x11, 0x31, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x04, 0x40, 0x00, // 07
    0x00, 0x00, 0x30, 0x00, 0x03, 0x11, 0x11, 0x11, 0x31, 0x10, 0x00, 0x00, 0x04, 0x46, // 08
    0x00, 0x00, 0x34, 0x44, 0x43, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x01, // 09
    0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x31, 0x11, 0x11, 0x11, 0x11, 0x30, 0x00, 0x00, // 0A
    0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x31, 0x11, 0x11, 0x11, 0x11, 0x30, 0x00, 0x00, // 0B
    0x11, 0x13, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x06, 0x00, 0x01, 0x11, 0x11, 0x31, // 0C
    0x11, 0x13, 0x11, 0x11, 0x11, 0x11, 0x11, 0x03, 0x11, 0x13, 0x01, 0x11, 0x11, 0x31, // 0D
    0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x11, 0x13, 0x00, 0x60, 0x00, 0x30, // 0E
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, // 0F

};

const uint8_t PROGMEM level4[] = {
    
    0x12, 0x0E,         // Player starting postion ..

    0x03,               // Number of enemies
    0x06, 0x06,
    0x0E, 0x0A,
    0x16, 0x06, 

    0x01, 0x0E,         // Rentry point 1 (cell X, cell y) ..
    0x08, 0x0E,         // Rentry point 2
    0x12, 0x0E,         // Rentry point 3
    0x19, 0x0E,         // Rentry point 4

    0x02,               // Level ladder element count ..
    0x00, 0x00,
    0x00, 0x01,

//    0     0     0     0     0     0     0     0     1     1     1     1     1     1
//    0     2     4     6     8     A     C     E     0     2     4     6     8     A  
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 00	
    0x04, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 01	
    0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x10, 0x60, 0x10, 0x00, 0x00, 0x30, 0x00, 0x00, // 02	
    0x30, 0x60, 0x03, 0x33, 0x00, 0x60, 0x11, 0x11, 0x10, 0x60, 0x03, 0x33, 0x00, 0x60, // 03	
    0x30, 0x33, 0x00, 0x30, 0x03, 0x30, 0x00, 0x00, 0x00, 0x33, 0x00, 0x30, 0x03, 0x30, // 04	
    0x30, 0x30, 0x33, 0x33, 0x30, 0x30, 0x00, 0x00, 0x00, 0x30, 0x33, 0x33, 0x30, 0x30, // 05	
    0x30, 0x30, 0x06, 0x06, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x06, 0x06, 0x00, 0x30, // 06	
    0x30, 0x03, 0x11, 0x11, 0x13, 0x00, 0x03, 0x33, 0x00, 0x03, 0x11, 0x11, 0x13, 0x00, // 07	
    0x30, 0x00, 0x33, 0x33, 0x30, 0x33, 0x00, 0x30, 0x03, 0x30, 0x33, 0x33, 0x30, 0x00, // 08	
    0x30, 0x00, 0x00, 0x00, 0x00, 0x30, 0x33, 0x33, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, // 09	
    0x30, 0x00, 0x06, 0x00, 0x00, 0x30, 0x06, 0x06, 0x00, 0x30, 0x00, 0x00, 0x60, 0x00, // 0A	
    0x31, 0x11, 0x11, 0x13, 0x00, 0x03, 0x11, 0x11, 0x13, 0x00, 0x31, 0x11, 0x11, 0x11, // 0B	
    0x30, 0x00, 0x00, 0x03, 0x00, 0x00, 0x33, 0x33, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, // 0C	
    0x30, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // 0D	
    0x30, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // 0E	
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, // 0F	

};

const uint8_t PROGMEM level5[] = {
    
    0x0F, 0x0E,         // Player starting postion ..

    0x04,               // Number of enemies
    0x18, 0x01,
    0x01, 0x05,
    0x04, 0x08,
    0x0F, 0x0B, 

    0x00, 0x01,         // Rentry point 1 (cell X, cell y) ..
    0x06, 0x05,         // Rentry point 2
    0x0F, 0x02,         // Rentry point 3
    0x18, 0x01,         // Rentry point 4

    0x08,               // Level ladder element count ..
    0x09, 0x00,
    0x09, 0x01,
    0x09, 0x02,
    0x09, 0x03,
    0x09, 0x04,
    0x09, 0x05,
    0x09, 0x06,
    0x09, 0x07,

//    0     0     0     0     0     0     0     0     1     1     1     1     1     1
//    0     2     4     6     8     A     C     E     0     2     4     6     8     A  
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 00
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, // 01
    0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x31, 0x11, 0x11, 0x11, // 02
    0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x30, 0x00, 0x00, 0x00, // 03
    0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // 04
    0x60, 0x01, 0x11, 0x00, 0x00, 0x00, 0x61, 0x11, 0x00, 0x00, 0x30, 0x00, 0x60, 0x00, // 05
    0x11, 0x31, 0x11, 0x10, 0x00, 0x00, 0x11, 0x11, 0x31, 0x11, 0x31, 0x11, 0x11, 0x11, // 06
    0x00, 0x30, 0x00, 0x11, 0x00, 0x01, 0x10, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // 07
    0x00, 0x36, 0x00, 0x01, 0x13, 0x11, 0x00, 0x00, 0x30, 0x00, 0x00, 0x60, 0x00, 0x00, // 08
    0x31, 0x11, 0x30, 0x00, 0x03, 0x00, 0x00, 0x01, 0x31, 0x13, 0x11, 0x10, 0x00, 0x00, // 09
    0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // 0A
    0x30, 0x00, 0x30, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // 0B
    0x30, 0x00, 0x31, 0x11, 0x11, 0x11, 0x31, 0x11, 0x11, 0x13, 0x11, 0x11, 0x13, 0x11, // 0C
    0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // 0D
    0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // 0E
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, // 0F

};

const uint8_t PROGMEM level6[] = {
    
    0x0D, 0x0B,         // Player starting postion ..

    0x05,               // Number of enemies
    0x15, 0x01,
    0x0A, 0x04,
    0x13, 0x08,
    0x02, 0x0E,
    0x14, 0x0E, 

    0x03, 0x01,         // Rentry point 1 (cell X, cell y) ..
    0x0E, 0x02,         // Rentry point 2
    0x15, 0x01,         // Rentry point 3
    0x19, 0x01,         // Rentry point 4

    0x03,               // Level ladder element count ..
    0x12, 0x00,
    0x12, 0x01,
    0x12, 0x02,

//    0     0     0     0     0     0     0     0     1     1     1     1     1     1
//    0     2     4     6     8     A     C     E     0     2     4     6     8     A  
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x01, 0x11, 0x11, 0x11, 0x11, // 00
    0x10, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x06, 0x00, 0x01, // 01
    0x15, 0x11, 0x13, 0x11, 0x11, 0x30, 0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x31, // 02
    0x15, 0x11, 0x13, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x01, 0x11, 0x00, 0x31, // 03
    0x10, 0x00, 0x03, 0x00, 0x60, 0x00, 0x00, 0x00, 0x11, 0x11, 0x01, 0x11, 0x00, 0x31, // 04
    0x13, 0x11, 0x11, 0x11, 0x11, 0x13, 0x11, 0x11, 0x11, 0x11, 0x01, 0x11, 0x00, 0x31, // 05
    0x13, 0x00, 0x01, 0x11, 0x11, 0x13, 0x11, 0x11, 0x16, 0x61, 0x01, 0x11, 0x60, 0x31, // 06
    0x13, 0x00, 0x01, 0x11, 0x11, 0x13, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x31, // 07
    0x13, 0x00, 0x01, 0x00, 0x00, 0x63, 0x00, 0x00, 0x60, 0x00, 0x00, 0x06, 0x01, 0x31, // 08
    0x13, 0x00, 0x01, 0x11, 0x31, 0x11, 0x11, 0x11, 0x31, 0x11, 0x11, 0x11, 0x31, 0x31, // 09
    0x13, 0x00, 0x61, 0x11, 0x30, 0x00, 0x00, 0x00, 0x31, 0x11, 0x11, 0x11, 0x31, 0x31, // 0A
    0x13, 0x11, 0x51, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30, 0x01, 0x10, 0x00, 0x31, 0x31, // 0B
    0x13, 0x11, 0x51, 0x31, 0x11, 0x11, 0x31, 0x11, 0x11, 0x11, 0x16, 0x60, 0x31, 0x31, // 0C
    0x13, 0x11, 0x51, 0x31, 0x11, 0x11, 0x31, 0x11, 0x11, 0x16, 0x11, 0x11, 0x11, 0x31, // 0D
    0x13, 0x00, 0x00, 0x31, 0x16, 0x11, 0x30, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x31, // 0E
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, // 0F

};

const uint8_t *levels[] =    { nullptr, level2, level1, level3, level4, level5, level6 };