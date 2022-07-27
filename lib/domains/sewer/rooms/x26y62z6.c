inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 62, 6 }));
  set_short( "Hallway - x26y62z6" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y62z6.c",
  "east" : DIR+"/rooms/x27y62z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
