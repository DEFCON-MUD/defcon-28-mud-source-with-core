inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 52, 2 }));
  set_short( "Corridor - x39y52z2" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y52z2.c",
  "east" : DIR+"/rooms/x40y52z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
