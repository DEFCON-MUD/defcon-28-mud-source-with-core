inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 6, 2 }));
  set_short( "Passage - x30y6z2" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y6z2.c",
  "east" : DIR+"/rooms/x31y6z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
