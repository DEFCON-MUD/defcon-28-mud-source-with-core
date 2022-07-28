inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 32, 9 }));
  set_short( "Passage - x9y32z9" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y32z9.c",
  "east" : DIR+"/rooms/x10y32z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
