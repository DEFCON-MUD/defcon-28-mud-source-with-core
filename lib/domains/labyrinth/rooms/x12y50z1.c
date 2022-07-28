inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 50, 1 }));
  set_short( "Corridor - x12y50z1" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y50z1.c",
  "east" : DIR+"/rooms/x13y50z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
