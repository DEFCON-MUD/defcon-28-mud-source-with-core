inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 62, 0 }));
  set_short( "Hallway - x35y62z0" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y62z0.c",
  "south" : DIR+"/rooms/x35y61z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
