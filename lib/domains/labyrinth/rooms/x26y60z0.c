inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 60, 0 }));
  set_short( "Hallway - x26y60z0" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y60z0.c",
  "east" : DIR+"/rooms/x27y60z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
