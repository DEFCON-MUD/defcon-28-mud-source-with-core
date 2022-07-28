inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 26, 0 }));
  set_short( "Passage - x17y26z0" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y26z0.c",
  "north" : DIR+"/rooms/x17y27z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
