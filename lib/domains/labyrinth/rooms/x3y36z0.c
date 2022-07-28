inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 36, 0 }));
  set_short( "Hallway - x3y36z0" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y37z0.c",
  "south" : DIR+"/rooms/x3y35z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
