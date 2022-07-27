inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 20, 2 }));
  set_short( "Hallway - x39y20z2" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "south" : DIR+"/rooms/x39y19z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
