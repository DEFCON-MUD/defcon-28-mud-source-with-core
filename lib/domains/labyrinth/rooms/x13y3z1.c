inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 3, 1 }));
  set_short( "Hallway - x13y3z1" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y4z1.c",
  "south" : DIR+"/rooms/x13y2z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
