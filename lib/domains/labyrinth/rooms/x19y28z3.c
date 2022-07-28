inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 28, 3 }));
  set_short( "Corridor - x19y28z3" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y28z3.c",
  "north" : DIR+"/rooms/x19y29z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
