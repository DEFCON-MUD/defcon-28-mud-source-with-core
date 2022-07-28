inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 59, 1 }));
  set_short( "Passage - x5y59z1" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y60z1.c",
  "south" : DIR+"/rooms/x5y58z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
