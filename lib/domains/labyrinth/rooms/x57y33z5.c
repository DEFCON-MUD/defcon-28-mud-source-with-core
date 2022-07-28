inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 33, 5 }));
  set_short( "Corridor - x57y33z5" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y34z5.c",
  "south" : DIR+"/rooms/x57y32z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
