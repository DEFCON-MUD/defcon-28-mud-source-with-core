inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 16, 5 }));
  set_short( "Hallway - x27y16z5" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y16z5.c",
  "north" : DIR+"/rooms/x27y17z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
