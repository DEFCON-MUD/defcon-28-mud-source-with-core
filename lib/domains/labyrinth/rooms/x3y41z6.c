inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 41, 6 }));
  set_short( "Corridor - x3y41z6" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y42z6.c",
  "south" : DIR+"/rooms/x3y40z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
