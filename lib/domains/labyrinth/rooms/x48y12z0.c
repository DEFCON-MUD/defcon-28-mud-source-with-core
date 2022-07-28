inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 12, 0 }));
  set_short( "Passage - x48y12z0" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y12z0.c",
  "east" : DIR+"/rooms/x49y12z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
