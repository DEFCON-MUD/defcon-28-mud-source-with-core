inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 60, 2 }));
  set_short( "Hallway - x59y60z2" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "south" : DIR+"/rooms/x59y59z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
