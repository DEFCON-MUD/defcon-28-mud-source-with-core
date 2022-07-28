inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 12, 9 }));
  set_short( "Corridor - x35y12z9" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y12z9.c",
  "north" : DIR+"/rooms/x35y13z9.c",
  "south" : DIR+"/rooms/x35y11z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
