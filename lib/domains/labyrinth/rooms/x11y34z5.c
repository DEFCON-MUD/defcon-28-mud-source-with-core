inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 34, 5 }));
  set_short( "Corridor - x11y34z5" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y35z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north.%^RESET%^");
}
