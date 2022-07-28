inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 50, 6 }));
  set_short( "Corridor - x29y50z6" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y51z6.c",
  "south" : DIR+"/rooms/x29y49z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
