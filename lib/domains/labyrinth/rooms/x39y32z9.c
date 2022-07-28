inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 32, 9 }));
  set_short( "Hallway - x39y32z9" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y32z9.c",
  "south" : DIR+"/rooms/x39y31z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
