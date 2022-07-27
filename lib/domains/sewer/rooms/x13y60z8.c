inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 60, 8 }));
  set_short( "Hallway - x13y60z8" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y60z8.c",
  "north" : DIR+"/rooms/x13y61z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
