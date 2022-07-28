inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 27, 8 }));
  set_short( "Passage - x35y27z8" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y28z8.c",
  "south" : DIR+"/rooms/x35y26z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
