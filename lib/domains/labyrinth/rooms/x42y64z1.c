inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 64, 1 }));
  set_short( "Corridor - x42y64z1" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y64z1.c",
  "east" : DIR+"/rooms/x43y64z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
