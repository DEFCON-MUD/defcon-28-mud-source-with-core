inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 0, 2 }));
  set_short( "Corridor - x38y0z2" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y0z2.c",
  "east" : DIR+"/rooms/x39y0z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
