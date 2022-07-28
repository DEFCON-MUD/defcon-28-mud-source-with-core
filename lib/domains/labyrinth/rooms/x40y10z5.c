inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 10, 5 }));
  set_short( "Hallway - x40y10z5" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y10z5.c",
  "east" : DIR+"/rooms/x41y10z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
