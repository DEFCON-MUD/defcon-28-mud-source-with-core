inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 22, 9 }));
  set_short( "Hallway - x60y22z9" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y22z9.c",
  "east" : DIR+"/rooms/x61y22z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
