inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 12, 8 }));
  set_short( "Hallway - x58y12z8" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y12z8.c",
  "east" : DIR+"/rooms/x59y12z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
