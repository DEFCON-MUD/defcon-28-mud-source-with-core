inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 4, 9 }));
  set_short( "Passage - x55y4z9" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y4z9.c",
  "east" : DIR+"/rooms/x56y4z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
