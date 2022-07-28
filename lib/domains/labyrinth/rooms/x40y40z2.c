inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 40, 2 }));
  set_short( "Passage - x40y40z2" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y40z2.c",
  "east" : DIR+"/rooms/x41y40z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
