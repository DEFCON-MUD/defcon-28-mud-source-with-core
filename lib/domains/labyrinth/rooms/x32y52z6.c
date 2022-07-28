inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 52, 6 }));
  set_short( "Corridor - x32y52z6" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y52z6.c",
  "east" : DIR+"/rooms/x33y52z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
