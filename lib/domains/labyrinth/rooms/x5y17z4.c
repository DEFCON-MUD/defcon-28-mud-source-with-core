inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 17, 4 }));
  set_short( "Passage - x5y17z4" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y18z4.c",
  "south" : DIR+"/rooms/x5y16z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
