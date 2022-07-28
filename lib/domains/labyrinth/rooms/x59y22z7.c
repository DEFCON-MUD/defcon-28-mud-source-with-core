inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 22, 7 }));
  set_short( "Hallway - x59y22z7" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y22z7.c",
  "east" : DIR+"/rooms/x60y22z7.c",
  "south" : DIR+"/rooms/x59y21z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
