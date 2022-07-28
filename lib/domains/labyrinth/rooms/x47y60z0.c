inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 60, 0 }));
  set_short( "Hallway - x47y60z0" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y61z0.c",
  "south" : DIR+"/rooms/x47y59z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
