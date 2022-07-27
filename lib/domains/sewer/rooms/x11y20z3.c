inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 20, 3 }));
  set_short( "Passage - x11y20z3" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y20z3.c",
  "south" : DIR+"/rooms/x11y19z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
