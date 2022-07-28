inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 43, 5 }));
  set_short( "Passage - x55y43z5" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y44z5.c",
  "south" : DIR+"/rooms/x55y42z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
