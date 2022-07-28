inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 20, 0 }));
  set_short( "Hallway - x27y20z0" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y21z0.c",
  "south" : DIR+"/rooms/x27y19z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
