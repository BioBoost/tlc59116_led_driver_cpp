#pragma once

#include <i2c_endpoint/i2c_endpoint.h>

namespace BBT {
  namespace Drivers {

    class TLC59116 {

      public:
        TLC59116(unsigned int address, std::string filename);

      private:
        BBT::I2cEndPoint i2cDevice;
    };

  };
};
