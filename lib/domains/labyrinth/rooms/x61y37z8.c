inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 37, 8 }));
  set_short( "Corridor - x61y37z8" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y38z8.c",
  "south" : DIR+"/rooms/x61y36z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
