inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 20, 3 }));
  set_short( "Passage - x57y20z3" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y20z3.c",
  "north" : DIR+"/rooms/x57y21z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
