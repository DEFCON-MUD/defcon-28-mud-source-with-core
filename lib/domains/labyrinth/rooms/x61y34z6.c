inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 34, 6 }));
  set_short( "Corridor - x61y34z6" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y34z6.c",
  "north" : DIR+"/rooms/x61y35z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
