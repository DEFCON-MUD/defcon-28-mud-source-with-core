inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 60, 1 }));
  set_short( "Corridor - x4y60z1" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y60z1.c",
  "east" : DIR+"/rooms/x5y60z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
