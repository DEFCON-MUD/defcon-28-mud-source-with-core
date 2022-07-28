inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 44, 4 }));
  set_short( "Passage - x37y44z4" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y44z4.c",
  "north" : DIR+"/rooms/x37y45z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
