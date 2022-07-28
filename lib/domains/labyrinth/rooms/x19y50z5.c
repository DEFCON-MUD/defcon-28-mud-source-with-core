inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 50, 5 }));
  set_short( "Hallway - x19y50z5" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y50z5.c",
  "south" : DIR+"/rooms/x19y49z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
