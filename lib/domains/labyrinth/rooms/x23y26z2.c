inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 26, 2 }));
  set_short( "Passage - x23y26z2" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y26z2.c",
  "north" : DIR+"/rooms/x23y27z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
