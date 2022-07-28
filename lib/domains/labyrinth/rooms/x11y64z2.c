inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 64, 2 }));
  set_short( "Passage - x11y64z2" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y64z2.c",
  "east" : DIR+"/rooms/x12y64z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
