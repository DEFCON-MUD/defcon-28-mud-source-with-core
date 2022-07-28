inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 14, 2 }));
  set_short( "Passage - x61y14z2" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y14z2.c",
  "north" : DIR+"/rooms/x61y15z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
