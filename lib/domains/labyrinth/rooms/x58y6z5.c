inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 6, 5 }));
  set_short( "Passage - x58y6z5" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y6z5.c",
  "east" : DIR+"/rooms/x59y6z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
