inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 30, 3 }));
  set_short( "Hallway - x37y30z3" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y31z3.c",
  "south" : DIR+"/rooms/x37y29z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
