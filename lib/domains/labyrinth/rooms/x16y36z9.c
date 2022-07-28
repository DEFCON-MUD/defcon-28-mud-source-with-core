inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 36, 9 }));
  set_short( "Corridor - x16y36z9" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y36z9.c",
  "east" : DIR+"/rooms/x17y36z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
