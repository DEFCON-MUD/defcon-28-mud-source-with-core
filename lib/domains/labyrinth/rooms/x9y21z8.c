inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 21, 8 }));
  set_short( "Passage - x9y21z8" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y22z8.c",
  "south" : DIR+"/rooms/x9y20z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
