inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 8, 0 }));
  set_short( "Corridor - x11y8z0" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y8z0.c",
  "east" : DIR+"/rooms/x12y8z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
