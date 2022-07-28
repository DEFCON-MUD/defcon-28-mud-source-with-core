inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 52, 5 }));
  set_short( "Passage - x11y52z5" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y52z5.c",
  "east" : DIR+"/rooms/x12y52z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
