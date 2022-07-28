inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 39, 6 }));
  set_short( "Passage - x19y39z6" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y40z6.c",
  "south" : DIR+"/rooms/x19y38z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
