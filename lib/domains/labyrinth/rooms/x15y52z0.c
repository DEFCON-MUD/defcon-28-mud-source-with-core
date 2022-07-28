inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 52, 0 }));
  set_short( "Passage - x15y52z0" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y52z0.c",
  "south" : DIR+"/rooms/x15y51z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
