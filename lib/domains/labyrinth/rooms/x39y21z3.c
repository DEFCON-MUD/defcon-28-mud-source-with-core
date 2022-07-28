inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 21, 3 }));
  set_short( "Hallway - x39y21z3" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y22z3.c",
  "south" : DIR+"/rooms/x39y20z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
