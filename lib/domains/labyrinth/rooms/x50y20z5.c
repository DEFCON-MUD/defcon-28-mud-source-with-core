inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 20, 5 }));
  set_short( "Corridor - x50y20z5" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y20z5.c",
  "east" : DIR+"/rooms/x51y20z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
