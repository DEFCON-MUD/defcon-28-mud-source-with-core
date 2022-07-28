inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 20, 2 }));
  set_short( "Corridor - x3y20z2" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y20z2.c",
  "north" : DIR+"/rooms/x3y21z2.c",
  "south" : DIR+"/rooms/x3y19z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
