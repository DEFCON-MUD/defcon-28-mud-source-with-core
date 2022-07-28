inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 37, 7 }));
  set_short( "Corridor - x41y37z7" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y38z7.c",
  "south" : DIR+"/rooms/x41y36z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
