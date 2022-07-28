inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 50, 1 }));
  set_short( "Corridor - x1y50z1" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y50z1.c",
  "north" : DIR+"/rooms/x1y51z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
