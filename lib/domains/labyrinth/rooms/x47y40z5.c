inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 40, 5 }));
  set_short( "Passage - x47y40z5" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y40z5.c",
  "south" : DIR+"/rooms/x47y39z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
