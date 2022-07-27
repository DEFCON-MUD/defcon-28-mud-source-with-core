inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 40, 3 }));
  set_short( "Passage - x41y40z3" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y40z3.c",
  "north" : DIR+"/rooms/x41y41z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
