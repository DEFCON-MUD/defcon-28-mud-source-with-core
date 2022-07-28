inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 39, 9 }));
  set_short( "Passage - x19y39z9" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y40z9.c",
  "south" : DIR+"/rooms/x19y38z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
