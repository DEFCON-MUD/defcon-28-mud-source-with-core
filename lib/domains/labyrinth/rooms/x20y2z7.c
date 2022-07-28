inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 2, 7 }));
  set_short( "Hallway - x20y2z7" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y2z7.c",
  "east" : DIR+"/rooms/x21y2z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
