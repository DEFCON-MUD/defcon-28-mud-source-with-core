inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 23, 8 }));
  set_short( "Corridor - x31y23z8" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y24z8.c",
  "south" : DIR+"/rooms/x31y22z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
