inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 15, 3 }));
  set_short( "Hallway - x37y15z3" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y16z3.c",
  "south" : DIR+"/rooms/x37y14z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
