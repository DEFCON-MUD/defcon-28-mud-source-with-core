inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 12, 4 }));
  set_short( "Corridor - x48y12z4" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y12z4.c",
  "east" : DIR+"/rooms/x49y12z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
