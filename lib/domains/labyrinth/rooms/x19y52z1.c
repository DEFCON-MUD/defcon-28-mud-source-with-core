inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 52, 1 }));
  set_short( "Passage - x19y52z1" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y53z1.c",
  "south" : DIR+"/rooms/x19y51z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
