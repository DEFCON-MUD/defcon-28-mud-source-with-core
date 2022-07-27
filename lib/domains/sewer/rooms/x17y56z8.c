inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 56, 8 }));
  set_short( "Passage - x17y56z8" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y56z8.c",
  "north" : DIR+"/rooms/x17y57z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
