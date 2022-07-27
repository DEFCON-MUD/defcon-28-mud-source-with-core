inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 28, 1 }));
  set_short( "Corridor - x26y28z1" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y28z1.c",
  "east" : DIR+"/rooms/x27y28z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
