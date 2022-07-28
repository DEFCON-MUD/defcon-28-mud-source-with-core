inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 59, 3 }));
  set_short( "Corridor - x23y59z3" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y60z3.c",
  "south" : DIR+"/rooms/x23y58z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
