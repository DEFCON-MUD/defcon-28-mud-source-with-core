inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 64, 2 }));
  set_short( "Corridor - x47y64z2" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y64z2.c",
  "east" : DIR+"/rooms/x48y64z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
