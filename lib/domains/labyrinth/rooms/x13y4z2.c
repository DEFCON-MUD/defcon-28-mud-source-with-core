inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 4, 2 }));
  set_short( "Passage - x13y4z2" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y4z2.c",
  "east" : DIR+"/rooms/x14y4z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
