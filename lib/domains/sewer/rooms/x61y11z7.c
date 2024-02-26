inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 11, 7 }));
  set_short( "Corridor - x61y11z7" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y12z7.c",
  "south" : DIR+"/rooms/x61y10z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
