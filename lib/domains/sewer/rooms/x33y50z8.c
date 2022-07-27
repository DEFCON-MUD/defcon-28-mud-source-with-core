inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 50, 8 }));
  set_short( "Hallway - x33y50z8" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y51z8.c",
  "south" : DIR+"/rooms/x33y49z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
