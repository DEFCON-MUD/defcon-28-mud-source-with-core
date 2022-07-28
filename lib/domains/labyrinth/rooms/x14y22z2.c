inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 22, 2 }));
  set_short( "Passage - x14y22z2" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y22z2.c",
  "east" : DIR+"/rooms/x15y22z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
