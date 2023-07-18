// Talkie library
// Copyright 2011 Peter Knight
// This code is released under GPLv2 license.
//
// The following phrases are derived from VM61003/4/5 ROMs
//
// A male voice with a US accent.
//
// These phrases have a very military bias
// with lots of very useful engineering words.
// They also have good expression.
// 

#include "talkie.h"

Talkie voice;
void setup() {
  voice.say(spWIND);
  voice.say(spNORTHEAST);
  voice.say(spGUSTING_TO);
  voice.say(spFOURTY);
  voice.say(spMILES);
  voice.say(spPER);
  voice.say(spHOUR);

}
void loop() {
}