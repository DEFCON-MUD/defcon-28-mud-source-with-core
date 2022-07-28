inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 5, 9 }));
  set_short( "Passage - x21y5z9" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y6z9.c",
  "south" : DIR+"/rooms/x21y4z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
