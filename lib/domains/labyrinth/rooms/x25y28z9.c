inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 28, 9 }));
  set_short( "Passage - x25y28z9" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y28z9.c",
  "south" : DIR+"/rooms/x25y27z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
