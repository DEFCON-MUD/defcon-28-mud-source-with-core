inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 56, 8 }));
  set_short( "Passage - x3y56z8" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y56z8.c",
  "north" : DIR+"/rooms/x3y57z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
