inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 58, 1 }));
  set_short( "Passage - x8y58z1" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y58z1.c",
  "east" : DIR+"/rooms/x9y58z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
