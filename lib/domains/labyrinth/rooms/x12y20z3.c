inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 20, 3 }));
  set_short( "Corridor - x12y20z3" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y20z3.c",
  "east" : DIR+"/rooms/x13y20z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
