inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 20, 9 }));
  set_short( "Passage - x23y20z9" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y20z9.c",
  "south" : DIR+"/rooms/x23y19z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
