inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 38, 7 }));
  set_short( "Passage - x19y38z7" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y38z7.c",
  "east" : DIR+"/rooms/x20y38z7.c",
  "south" : DIR+"/rooms/x19y37z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
