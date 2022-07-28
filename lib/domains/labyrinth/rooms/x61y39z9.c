inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 39, 9 }));
  set_short( "Hallway - x61y39z9" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y40z9.c",
  "south" : DIR+"/rooms/x61y38z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
