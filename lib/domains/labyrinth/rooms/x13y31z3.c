inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 31, 3 }));
  set_short( "Passage - x13y31z3" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y32z3.c",
  "south" : DIR+"/rooms/x13y30z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
