inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 60, 4 }));
  set_short( "Corridor - x5y60z4" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y60z4.c",
  "north" : DIR+"/rooms/x5y61z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
