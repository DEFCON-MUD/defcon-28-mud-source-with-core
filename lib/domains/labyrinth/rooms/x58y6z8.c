inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 6, 8 }));
  set_short( "Hallway - x58y6z8" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y6z8.c",
  "east" : DIR+"/rooms/x59y6z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
