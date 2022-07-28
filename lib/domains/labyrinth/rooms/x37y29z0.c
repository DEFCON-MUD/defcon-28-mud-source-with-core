inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 29, 0 }));
  set_short( "Hallway - x37y29z0" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y30z0.c",
  "south" : DIR+"/rooms/x37y28z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
