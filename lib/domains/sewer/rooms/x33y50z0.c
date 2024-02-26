inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 50, 0 }));
  set_short( "Corridor - x33y50z0" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y50z0.c",
  "east" : DIR+"/rooms/x34y50z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
