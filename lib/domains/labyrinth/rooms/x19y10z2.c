inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 10, 2 }));
  set_short( "Hallway - x19y10z2" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y11z2.c",
  "south" : DIR+"/rooms/x19y9z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
