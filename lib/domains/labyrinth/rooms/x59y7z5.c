inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 7, 5 }));
  set_short( "Corridor - x59y7z5" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y8z5.c",
  "south" : DIR+"/rooms/x59y6z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
