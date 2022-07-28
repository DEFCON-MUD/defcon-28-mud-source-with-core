inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 9, 2 }));
  set_short( "Passage - x55y9z2" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y10z2.c",
  "south" : DIR+"/rooms/x55y8z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
