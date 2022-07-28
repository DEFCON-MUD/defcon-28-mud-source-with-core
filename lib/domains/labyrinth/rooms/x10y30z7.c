inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 30, 7 }));
  set_short( "Corridor - x10y30z7" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y30z7.c",
  "east" : DIR+"/rooms/x11y30z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
