/*
  G35: An Arduino library for GE Color Effects G-35 holiday lights.
  Copyright (c) 2012 The G35 Authors. Use, modification, and distribution are
  subject to the BSD license as described in the accompanying LICENSE file.

  By Mike Tsao <http://github.com/sowbug>.

  and Mark Ortiz
  and Adafruit

  See README for complete attributions.
*/

#pragma once

#include <MEOLightProgram.h>

class MEOSwitchOff : public MEOLightProgram
{
public:
    MEOSwitchOff(MEOG35& g35);
    uint32_t Do();
};
