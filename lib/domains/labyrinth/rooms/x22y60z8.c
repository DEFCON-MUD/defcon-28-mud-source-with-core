inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 60, 8 }));
  set_short( "Passage - x22y60z8" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y60z8.c",
  "east" : DIR+"/rooms/x23y60z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
