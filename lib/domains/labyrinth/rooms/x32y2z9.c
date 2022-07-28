inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 2, 9 }));
  set_short( "Corridor - x32y2z9" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y2z9.c",
  "east" : DIR+"/rooms/x33y2z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
