inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 46, 2 }));
  set_short( "Corridor - x29y46z2" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y46z2.c",
  "south" : DIR+"/rooms/x29y45z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
