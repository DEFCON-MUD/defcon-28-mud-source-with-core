inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 38, 0 }));
  set_short( "Hallway - x41y38z0" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y39z0.c",
  "south" : DIR+"/rooms/x41y37z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
