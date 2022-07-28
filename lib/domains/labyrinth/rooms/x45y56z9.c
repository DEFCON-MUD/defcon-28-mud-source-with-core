inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 56, 9 }));
  set_short( "Hallway - x45y56z9" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y56z9.c",
  "north" : DIR+"/rooms/x45y57z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
