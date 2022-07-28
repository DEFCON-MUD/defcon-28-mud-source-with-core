inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 21, 3 }));
  set_short( "Corridor - x21y21z3" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y22z3.c",
  "south" : DIR+"/rooms/x21y20z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
