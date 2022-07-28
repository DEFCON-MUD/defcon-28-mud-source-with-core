inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 60, 4 }));
  set_short( "Hallway - x10y60z4" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y60z4.c",
  "east" : DIR+"/rooms/x11y60z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
