inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 10, 7 }));
  set_short( "Corridor - x39y10z7" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y10z7.c",
  "east" : DIR+"/rooms/x40y10z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
