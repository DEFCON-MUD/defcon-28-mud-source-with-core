inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 20, 8 }));
  set_short( "Hallway - x7y20z8" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y20z8.c",
  "south" : DIR+"/rooms/x7y19z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
