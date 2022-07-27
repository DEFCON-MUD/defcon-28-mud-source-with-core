inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 39, 8 }));
  set_short( "Hallway - x13y39z8" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y40z8.c",
  "south" : DIR+"/rooms/x13y38z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
