inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 2, 1 }));
  set_short( "Passage - x1y2z1" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y2z1.c",
  "north" : DIR+"/rooms/x1y3z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
