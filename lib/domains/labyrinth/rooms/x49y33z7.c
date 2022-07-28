inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 33, 7 }));
  set_short( "Passage - x49y33z7" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y34z7.c",
  "south" : DIR+"/rooms/x49y32z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
