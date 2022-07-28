inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 6, 0 }));
  set_short( "Hallway - x32y6z0" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y6z0.c",
  "east" : DIR+"/rooms/x33y6z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
