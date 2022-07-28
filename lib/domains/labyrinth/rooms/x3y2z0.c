inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 2, 0 }));
  set_short( "Passage - x3y2z0" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y2z0.c",
  "north" : DIR+"/rooms/x3y3z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
