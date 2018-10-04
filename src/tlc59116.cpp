#include "tlc59116.h"

namespace BBT {
  namespace Drivers {

    TLC59116::TLC59116(unsigned int address, std::string filename) 
      : i2cDevice(address, filename) {

    }

  };
};
