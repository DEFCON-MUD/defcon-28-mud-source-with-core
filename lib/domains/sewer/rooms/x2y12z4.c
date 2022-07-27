inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 12, 4 }));
  set_short( "Passage - x2y12z4" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y12z4.c",
  "east" : DIR+"/rooms/x3y12z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
