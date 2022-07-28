inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 34, 0 }));
  set_short( "Hallway - x31y34z0" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y34z0.c",
  "north" : DIR+"/rooms/x31y35z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
