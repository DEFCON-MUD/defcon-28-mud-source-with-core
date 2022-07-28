inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 18, 9 }));
  set_short( "Hallway - x50y18z9" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y18z9.c",
  "east" : DIR+"/rooms/x51y18z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
