inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 57, 1 }));
  set_short( "Passage - x43y57z1" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y58z1.c",
  "south" : DIR+"/rooms/x43y56z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
