inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 51, 2 }));
  set_short( "Hallway - x13y51z2" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y52z2.c",
  "south" : DIR+"/rooms/x13y50z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
