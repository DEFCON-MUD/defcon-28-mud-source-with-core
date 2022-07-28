inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 38, 3 }));
  set_short( "Passage - x19y38z3" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y39z3.c",
  "south" : DIR+"/rooms/x19y37z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
