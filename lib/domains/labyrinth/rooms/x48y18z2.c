inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 18, 2 }));
  set_short( "Hallway - x48y18z2" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y18z2.c",
  "east" : DIR+"/rooms/x49y18z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
