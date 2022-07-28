inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 19, 1 }));
  set_short( "Passage - x13y19z1" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y20z1.c",
  "south" : DIR+"/rooms/x13y18z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
