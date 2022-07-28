inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 32, 8 }));
  set_short( "Hallway - x40y32z8" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y32z8.c",
  "east" : DIR+"/rooms/x41y32z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
