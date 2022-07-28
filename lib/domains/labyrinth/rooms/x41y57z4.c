inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 57, 4 }));
  set_short( "Passage - x41y57z4" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y58z4.c",
  "south" : DIR+"/rooms/x41y56z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
