inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 14, 0 }));
  set_short( "Passage - x27y14z0" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y14z0.c",
  "north" : DIR+"/rooms/x27y15z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
