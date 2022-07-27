inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 18, 8 }));
  set_short( "Hallway - x45y18z8" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y18z8.c",
  "south" : DIR+"/rooms/x45y17z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
