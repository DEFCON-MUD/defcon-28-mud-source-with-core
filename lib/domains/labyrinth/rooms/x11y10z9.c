inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 10, 9 }));
  set_short( "Passage - x11y10z9" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y10z9.c",
  "north" : DIR+"/rooms/x11y11z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
