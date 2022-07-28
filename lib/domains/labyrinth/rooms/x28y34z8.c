inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 34, 8 }));
  set_short( "Hallway - x28y34z8" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y34z8.c",
  "east" : DIR+"/rooms/x29y34z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
