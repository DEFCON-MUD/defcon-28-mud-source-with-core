inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 22, 2 }));
  set_short( "Hallway - x19y22z2" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y22z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
