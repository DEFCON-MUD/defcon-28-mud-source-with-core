inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 38, 0 }));
  set_short( "Corridor - x28y38z0" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y38z0.c",
  "east" : DIR+"/rooms/x29y38z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
