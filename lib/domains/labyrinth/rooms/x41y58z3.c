inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 58, 3 }));
  set_short( "Hallway - x41y58z3" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y58z3.c",
  "south" : DIR+"/rooms/x41y57z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
