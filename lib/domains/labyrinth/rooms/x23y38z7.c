inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 38, 7 }));
  set_short( "Passage - x23y38z7" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y38z7.c",
  "south" : DIR+"/rooms/x23y37z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
