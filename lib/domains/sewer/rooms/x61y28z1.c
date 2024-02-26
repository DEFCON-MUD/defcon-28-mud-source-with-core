inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 28, 1 }));
  set_short( "Corridor - x61y28z1" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y28z1.c",
  "south" : DIR+"/rooms/x61y27z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
