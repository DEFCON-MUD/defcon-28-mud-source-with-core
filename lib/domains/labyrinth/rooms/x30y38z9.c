inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 38, 9 }));
  set_short( "Corridor - x30y38z9" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y38z9.c",
  "east" : DIR+"/rooms/x31y38z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
