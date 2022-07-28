inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 60, 3 }));
  set_short( "Hallway - x43y60z3" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y60z3.c",
  "east" : DIR+"/rooms/x44y60z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
