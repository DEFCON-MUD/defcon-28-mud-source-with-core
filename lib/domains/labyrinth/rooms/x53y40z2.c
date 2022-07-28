inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 40, 2 }));
  set_short( "Passage - x53y40z2" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y40z2.c",
  "north" : DIR+"/rooms/x53y41z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
