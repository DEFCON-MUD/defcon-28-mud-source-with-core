inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 42, 4 }));
  set_short( "Hallway - x58y42z4" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y42z4.c",
  "east" : DIR+"/rooms/x59y42z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
