inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 2, 9 }));
  set_short( "Hallway - x12y2z9" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y2z9.c",
  "east" : DIR+"/rooms/x13y2z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
