inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 52, 2 }));
  set_short( "Corridor - x1y52z2" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y52z2.c",
  "south" : DIR+"/rooms/x1y51z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
