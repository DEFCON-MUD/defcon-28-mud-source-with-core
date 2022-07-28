inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 30, 2 }));
  set_short( "Corridor - x1y30z2" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y31z2.c",
  "south" : DIR+"/rooms/x1y29z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
