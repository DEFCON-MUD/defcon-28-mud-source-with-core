inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 59, 0 }));
  set_short( "Hallway - x55y59z0" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y60z0.c",
  "south" : DIR+"/rooms/x55y58z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
