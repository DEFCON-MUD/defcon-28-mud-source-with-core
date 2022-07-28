inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 30, 0 }));
  set_short( "Hallway - x42y30z0" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y30z0.c",
  "east" : DIR+"/rooms/x43y30z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
