inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 20, 3 }));
  set_short( "Corridor - x7y20z3" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y21z3.c",
  "south" : DIR+"/rooms/x7y19z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
