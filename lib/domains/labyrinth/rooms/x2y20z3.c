inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 20, 3 }));
  set_short( "Passage - x2y20z3" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y20z3.c",
  "east" : DIR+"/rooms/x3y20z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
