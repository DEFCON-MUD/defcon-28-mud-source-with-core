inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 0, 5 }));
  set_short( "Passage - x29y0z5" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y0z5.c",
  "east" : DIR+"/rooms/x30y0z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
