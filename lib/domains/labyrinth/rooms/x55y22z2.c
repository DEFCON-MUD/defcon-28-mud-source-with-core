inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 22, 2 }));
  set_short( "Passage - x55y22z2" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y22z2.c",
  "east" : DIR+"/rooms/x56y22z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
