inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 60, 4 }));
  set_short( "Passage - x51y60z4" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y60z4.c",
  "south" : DIR+"/rooms/x51y59z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
