inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 32, 7 }));
  set_short( "Passage - x5y32z7" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y32z7.c",
  "north" : DIR+"/rooms/x5y33z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
