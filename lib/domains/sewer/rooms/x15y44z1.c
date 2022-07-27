inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 44, 1 }));
  set_short( "Passage - x15y44z1" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y44z1.c",
  "north" : DIR+"/rooms/x15y45z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
