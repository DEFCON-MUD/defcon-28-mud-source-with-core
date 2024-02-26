inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 60, 4 }));
  set_short( "Passage - x60y60z4" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y60z4.c",
  "east" : DIR+"/rooms/x61y60z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
