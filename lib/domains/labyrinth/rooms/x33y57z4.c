inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 57, 4 }));
  set_short( "Passage - x33y57z4" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y58z4.c",
  "south" : DIR+"/rooms/x33y56z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
