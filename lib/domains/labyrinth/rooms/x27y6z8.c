inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 6, 8 }));
  set_short( "Hallway - x27y6z8" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y6z8.c",
  "north" : DIR+"/rooms/x27y7z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
