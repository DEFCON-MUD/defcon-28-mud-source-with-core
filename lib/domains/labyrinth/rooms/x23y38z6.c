inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 38, 6 }));
  set_short( "Passage - x23y38z6" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y38z6.c",
  "east" : DIR+"/rooms/x24y38z6.c",
  "north" : DIR+"/rooms/x23y39z6.c",
  "south" : DIR+"/rooms/x23y37z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
