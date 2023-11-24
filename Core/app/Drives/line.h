#pragma once

class line {
   public:
    line();
    void init();
    uint16_t getCount();

   private:
    uint16_t MuxPin[2][4];
};