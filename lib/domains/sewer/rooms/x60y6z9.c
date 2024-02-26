inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 6, 9 }));
  set_short( "Corridor - x60y6z9" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y6z9.c",
  "east" : DIR+"/rooms/x61y6z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
