inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 44, 1 }));
  set_short( "Passage - x15y44z1" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y44z1.c",
  "north" : DIR+"/rooms/x15y45z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
