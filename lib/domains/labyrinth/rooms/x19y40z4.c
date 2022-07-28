inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 40, 4 }));
  set_short( "Corridor - x19y40z4" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y40z4.c",
  "north" : DIR+"/rooms/x19y41z4.c",
  "south" : DIR+"/rooms/x19y39z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
