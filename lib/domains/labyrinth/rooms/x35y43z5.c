inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 43, 5 }));
  set_short( "Hallway - x35y43z5" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y44z5.c",
  "south" : DIR+"/rooms/x35y42z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
