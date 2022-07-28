inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 0, 8 }));
  set_short( "Hallway - x22y0z8" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y0z8.c",
  "east" : DIR+"/rooms/x23y0z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
