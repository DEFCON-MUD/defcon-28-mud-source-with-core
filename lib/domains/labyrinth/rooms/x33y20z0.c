inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 20, 0 }));
  set_short( "Corridor - x33y20z0" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y21z0.c",
  "south" : DIR+"/rooms/x33y19z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
