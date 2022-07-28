inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 19, 3 }));
  set_short( "Passage - x15y19z3" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y20z3.c",
  "south" : DIR+"/rooms/x15y18z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
