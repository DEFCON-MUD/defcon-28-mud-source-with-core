inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 44, 9 }));
  set_short( "Corridor - x1y44z9" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y44z9.c",
  "north" : DIR+"/rooms/x1y45z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
