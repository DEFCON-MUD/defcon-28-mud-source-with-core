inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 60, 8 }));
  set_short( "Corridor - x33y60z8" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y60z8.c",
  "north" : DIR+"/rooms/x33y61z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
