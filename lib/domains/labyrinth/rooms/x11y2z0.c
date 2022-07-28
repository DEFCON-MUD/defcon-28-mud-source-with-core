inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 2, 0 }));
  set_short( "Corridor - x11y2z0" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y2z0.c",
  "east" : DIR+"/rooms/x12y2z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
