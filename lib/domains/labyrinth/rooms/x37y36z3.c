inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 36, 3 }));
  set_short( "Passage - x37y36z3" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y36z3.c",
  "south" : DIR+"/rooms/x37y35z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
