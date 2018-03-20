#pragma once

const uint16_t pickUpGold[] PROGMEM = {

  NOTE_A6, 15, NOTE_C6, 15, NOTE_E6, 15, TONES_END

};

const uint16_t digAHole[] PROGMEM = {

  NOTE_D5, 75, NOTE_REST, 15, NOTE_D5, 75, NOTE_REST, 15, NOTE_D5, 75, NOTE_REST, 15, NOTE_D4, 75, TONES_END

};

const uint16_t enemyFallsIn[] PROGMEM = {

  NOTE_A6, 30, NOTE_REST, 10, NOTE_A6, 30, TONES_END

};

const uint16_t freeFalling[] PROGMEM = {

  NOTE_G6, 75, NOTE_REST, 25, 
  NOTE_F6, 75, NOTE_REST, 25, 
  NOTE_E6, 75, NOTE_REST, 25, 
  NOTE_D6, 75, NOTE_REST, 25, 
  NOTE_C6, 75, NOTE_REST, 25, 
  NOTE_B6, 75, NOTE_REST, 25, 
  NOTE_A6, 75, NOTE_REST, 25, 
  NOTE_G5, 75, NOTE_REST, 25, 
  NOTE_F5, 75, NOTE_REST, 25, 
  NOTE_E5, 75, NOTE_REST, 25, 
  NOTE_D5, 75, NOTE_REST, 25, 
  NOTE_C5, 75, NOTE_REST, 25, 
  NOTE_B5, 75, NOTE_REST, 25, 
  NOTE_A5, 75, NOTE_REST, 25, 

  NOTE_G4, 75, NOTE_REST, 25, 
  NOTE_F4, 75, NOTE_REST, 25, 
  NOTE_E4, 75, NOTE_REST, 25, 
  NOTE_D4, 75, NOTE_REST, 25, 
  NOTE_C4, 75, NOTE_REST, 25, 
  NOTE_B4, 75, NOTE_REST, 25, 
  NOTE_A4, 75, NOTE_REST, 25, 
  NOTE_G3, 75, NOTE_REST, 25, 
  NOTE_F3, 75, NOTE_REST, 25, 
  NOTE_E3, 75, NOTE_REST, 25, 
  NOTE_D3, 75, NOTE_REST, 25, 
  NOTE_C3, 75, NOTE_REST, 25, 
  NOTE_B3, 75, NOTE_REST, 25, 
  NOTE_A3, 75, NOTE_REST, 25, 
  
  NOTE_G2, 75, NOTE_REST, 25, 
  NOTE_F2, 75, NOTE_REST, 25, 
  NOTE_E2, 75, NOTE_REST, 25, 
  NOTE_D2, 75, NOTE_REST, 25, 
  NOTE_C2, 75, NOTE_REST, 25, 
  NOTE_B2, 75, NOTE_REST, 25, 
  NOTE_A2, 75, NOTE_REST, 25, 
  NOTE_G1, 75, NOTE_REST, 25, 
  NOTE_F1, 75, NOTE_REST, 25, 
  NOTE_E1, 75, NOTE_REST, 25, 
  NOTE_D1, 75, NOTE_REST, 25, 
  NOTE_C1, 75, NOTE_REST, 25, 
  NOTE_B1, 75, NOTE_REST, 25, 
  NOTE_A1, 75, NOTE_REST, 25,  
  
  TONES_END

};

const uint16_t levelComplete[] PROGMEM = {

  NOTE_G4, 100, NOTE_REST, 20, 
  NOTE_B5, 100, NOTE_REST, 20, 
  NOTE_D5, 100, NOTE_REST, 40, 
  
  NOTE_C6, 100, NOTE_REST, 20, 
  NOTE_E6, 100, NOTE_REST, 20, 
  NOTE_G6, 100, NOTE_REST, 40, 

  TONES_END
  
};

const uint16_t dead[] PROGMEM = {
  
  NOTE_G6, 100, NOTE_REST, 20, 
  NOTE_E6, 100, NOTE_REST, 20, 
  NOTE_C6, 100, NOTE_REST, 40, 

  NOTE_D5, 100, NOTE_REST, 20, 
  NOTE_B5, 100, NOTE_REST, 20, 
  NOTE_G4, 100, NOTE_REST, 40, 

  TONES_END
  
};

const uint16_t score[] PROGMEM = {
  NOTE_REST,500,
  NOTE_DS3,165, NOTE_REST,168, NOTE_D3,156, NOTE_REST,9, NOTE_AS3,156, NOTE_REST,9, NOTE_E3,156, NOTE_REST,9,
  NOTE_B3,156, NOTE_REST,9, NOTE_E3,165, NOTE_REST,168, NOTE_AS3,165, NOTE_REST,168, NOTE_C3,156, NOTE_REST,9,
  NOTE_GS3,156, NOTE_REST,9, NOTE_D3,156, NOTE_REST,9, NOTE_AS3,156, NOTE_REST,9, NOTE_D3,156, NOTE_REST,9,
  NOTE_CS3,156,
  TONES_END
};