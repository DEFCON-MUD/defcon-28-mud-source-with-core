inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 18, 3 }));
  set_short( "Hallway - x38y18z3" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y18z3.c",
  "east" : DIR+"/rooms/x39y18z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
