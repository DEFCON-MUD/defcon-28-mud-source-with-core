inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 52, 3 }));
  set_short( "Passage - x33y52z3" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y52z3.c",
  "north" : DIR+"/rooms/x33y53z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
