inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 34, 0 }));
  set_short( "Hallway - x43y34z0" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y34z0.c",
  "east" : DIR+"/rooms/x44y34z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
