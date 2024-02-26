inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 33, 3 }));
  set_short( "Corridor - x33y33z3" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y34z3.c",
  "south" : DIR+"/rooms/x33y32z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
