inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 64, 1 }));
  set_short( "Hallway - x52y64z1" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y64z1.c",
  "east" : DIR+"/rooms/x53y64z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
