inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 2 }));
  set_short( "Passage - x59y52z2" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y52z2.c",
  "north" : DIR+"/rooms/x59y53z2.c",
  "south" : DIR+"/rooms/x59y51z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
