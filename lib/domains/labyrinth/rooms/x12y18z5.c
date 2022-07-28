inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 18, 5 }));
  set_short( "Passage - x12y18z5" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y18z5.c",
  "east" : DIR+"/rooms/x13y18z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
