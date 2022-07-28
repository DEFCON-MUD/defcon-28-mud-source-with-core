inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 32, 9 }));
  set_short( "Hallway - x40y32z9" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y32z9.c",
  "east" : DIR+"/rooms/x41y32z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
