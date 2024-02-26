inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 18, 3 }));
  set_short( "Passage - x44y18z3" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y18z3.c",
  "east" : DIR+"/rooms/x45y18z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
