inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 22, 0 }));
  set_short( "Hallway - x47y22z0" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y22z0.c",
  "north" : DIR+"/rooms/x47y23z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
