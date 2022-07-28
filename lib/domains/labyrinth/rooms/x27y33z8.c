inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 33, 8 }));
  set_short( "Passage - x27y33z8" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y34z8.c",
  "south" : DIR+"/rooms/x27y32z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
