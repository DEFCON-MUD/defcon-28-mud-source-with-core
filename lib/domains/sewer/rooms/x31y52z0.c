inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 52, 0 }));
  set_short( "Corridor - x31y52z0" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y52z0.c",
  "south" : DIR+"/rooms/x31y51z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
