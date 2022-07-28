inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 14, 6 }));
  set_short( "Passage - x25y14z6" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y14z6.c",
  "east" : DIR+"/rooms/x26y14z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
