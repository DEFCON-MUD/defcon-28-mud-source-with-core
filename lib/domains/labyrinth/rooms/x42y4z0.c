inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 4, 0 }));
  set_short( "Hallway - x42y4z0" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y4z0.c",
  "east" : DIR+"/rooms/x43y4z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
