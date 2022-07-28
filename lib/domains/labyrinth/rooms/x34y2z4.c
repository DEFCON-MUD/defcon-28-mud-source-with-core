inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 2, 4 }));
  set_short( "Passage - x34y2z4" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y2z4.c",
  "east" : DIR+"/rooms/x35y2z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
