inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 20, 4 }));
  set_short( "Corridor - x44y20z4" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y20z4.c",
  "east" : DIR+"/rooms/x45y20z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
