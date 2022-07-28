inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 38, 1 }));
  set_short( "Passage - x27y38z1" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y38z1.c",
  "north" : DIR+"/rooms/x27y39z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
