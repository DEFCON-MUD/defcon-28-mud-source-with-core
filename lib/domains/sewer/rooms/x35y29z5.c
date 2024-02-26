inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 29, 5 }));
  set_short( "Hallway - x35y29z5" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y30z5.c",
  "south" : DIR+"/rooms/x35y28z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
