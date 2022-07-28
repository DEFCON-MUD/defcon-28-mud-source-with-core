inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 50, 8 }));
  set_short( "Hallway - x12y50z8" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y50z8.c",
  "east" : DIR+"/rooms/x13y50z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
