inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 0, 2 }));
  set_short( "Hallway - x10y0z2" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y0z2.c",
  "east" : DIR+"/rooms/x11y0z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
