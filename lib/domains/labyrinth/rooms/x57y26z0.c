inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 26, 0 }));
  set_short( "Corridor - x57y26z0" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y27z0.c",
  "south" : DIR+"/rooms/x57y25z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
