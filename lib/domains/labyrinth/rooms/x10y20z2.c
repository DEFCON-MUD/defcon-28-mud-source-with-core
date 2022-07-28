inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 20, 2 }));
  set_short( "Corridor - x10y20z2" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y20z2.c",
  "east" : DIR+"/rooms/x11y20z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
