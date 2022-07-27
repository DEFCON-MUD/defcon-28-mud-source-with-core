inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 58, 4 }));
  set_short( "Corridor - x30y58z4" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y58z4.c",
  "east" : DIR+"/rooms/x31y58z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
