inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 20, 2 }));
  set_short( "Corridor - x46y20z2" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y20z2.c",
  "east" : DIR+"/rooms/x47y20z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
