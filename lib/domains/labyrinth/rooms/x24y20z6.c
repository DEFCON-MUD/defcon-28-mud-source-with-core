inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 20, 6 }));
  set_short( "Corridor - x24y20z6" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y20z6.c",
  "east" : DIR+"/rooms/x25y20z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
