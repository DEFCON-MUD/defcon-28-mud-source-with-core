inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 40, 4 }));
  set_short( "Passage - x51y40z4" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y41z4.c",
  "south" : DIR+"/rooms/x51y39z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
