inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 20, 5 }));
  set_short( "Corridor - x53y20z5" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y20z5.c",
  "north" : DIR+"/rooms/x53y21z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
