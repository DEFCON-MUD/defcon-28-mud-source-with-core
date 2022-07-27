inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 58, 5 }));
  set_short( "Passage - x58y58z5" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y58z5.c",
  "east" : DIR+"/rooms/x59y58z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
