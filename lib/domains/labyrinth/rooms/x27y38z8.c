inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 38, 8 }));
  set_short( "Hallway - x27y38z8" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y38z8.c",
  "north" : DIR+"/rooms/x27y39z8.c",
  "south" : DIR+"/rooms/x27y37z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
