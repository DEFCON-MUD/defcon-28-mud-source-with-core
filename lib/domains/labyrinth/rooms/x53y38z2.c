inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 38, 2 }));
  set_short( "Passage - x53y38z2" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y38z2.c",
  "east" : DIR+"/rooms/x54y38z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
