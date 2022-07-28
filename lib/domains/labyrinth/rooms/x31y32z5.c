inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 32, 5 }));
  set_short( "Hallway - x31y32z5" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y32z5.c",
  "east" : DIR+"/rooms/x32y32z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
