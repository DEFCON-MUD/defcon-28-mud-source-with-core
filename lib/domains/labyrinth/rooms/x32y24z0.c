inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 24, 0 }));
  set_short( "Passage - x32y24z0" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y24z0.c",
  "east" : DIR+"/rooms/x33y24z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
