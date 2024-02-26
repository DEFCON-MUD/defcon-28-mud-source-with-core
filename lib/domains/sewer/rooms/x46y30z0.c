inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 30, 0 }));
  set_short( "Hallway - x46y30z0" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y30z0.c",
  "east" : DIR+"/rooms/x47y30z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
