inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 22, 1 }));
  set_short( "Corridor - x8y22z1" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y22z1.c",
  "east" : DIR+"/rooms/x9y22z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
