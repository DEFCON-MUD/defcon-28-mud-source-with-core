inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 6, 3 }));
  set_short( "Passage - x29y6z3" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y6z3.c",
  "south" : DIR+"/rooms/x29y5z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
