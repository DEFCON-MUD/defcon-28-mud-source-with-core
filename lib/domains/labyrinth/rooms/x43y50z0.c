inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 50, 0 }));
  set_short( "Passage - x43y50z0" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y50z0.c",
  "east" : DIR+"/rooms/x44y50z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
