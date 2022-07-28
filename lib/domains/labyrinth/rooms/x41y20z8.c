inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 20, 8 }));
  set_short( "Hallway - x41y20z8" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y20z8.c",
  "north" : DIR+"/rooms/x41y21z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
