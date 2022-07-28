inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 18, 0 }));
  set_short( "Hallway - x45y18z0" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y18z0.c",
  "east" : DIR+"/rooms/x46y18z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
