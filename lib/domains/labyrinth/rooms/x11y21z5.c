inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 21, 5 }));
  set_short( "Passage - x11y21z5" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y22z5.c",
  "south" : DIR+"/rooms/x11y20z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
