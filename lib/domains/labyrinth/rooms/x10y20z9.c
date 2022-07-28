inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 20, 9 }));
  set_short( "Hallway - x10y20z9" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y20z9.c",
  "east" : DIR+"/rooms/x11y20z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
