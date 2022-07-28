inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 64, 9 }));
  set_short( "Corridor - x27y64z9" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y64z9.c",
  "east" : DIR+"/rooms/x28y64z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
