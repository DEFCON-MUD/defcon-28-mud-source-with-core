inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 64, 4 }));
  set_short( "Hallway - x24y64z4" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y64z4.c",
  "east" : DIR+"/rooms/x25y64z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
