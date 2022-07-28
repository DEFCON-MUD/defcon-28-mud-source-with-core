inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 17, 2 }));
  set_short( "Corridor - x23y17z2" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y18z2.c",
  "south" : DIR+"/rooms/x23y16z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
