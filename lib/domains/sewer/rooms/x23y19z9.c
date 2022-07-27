inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 19, 9 }));
  set_short( "Corridor - x23y19z9" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y20z9.c",
  "south" : DIR+"/rooms/x23y18z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
