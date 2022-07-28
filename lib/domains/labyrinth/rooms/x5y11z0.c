inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 11, 0 }));
  set_short( "Passage - x5y11z0" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y12z0.c",
  "south" : DIR+"/rooms/x5y10z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
