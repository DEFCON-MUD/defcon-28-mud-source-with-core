inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 7, 4 }));
  set_short( "Hallway - x49y7z4" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y8z4.c",
  "south" : DIR+"/rooms/x49y6z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
