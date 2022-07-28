inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 0, 6 }));
  set_short( "Corridor - x41y0z6" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y0z6.c",
  "east" : DIR+"/rooms/x42y0z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
