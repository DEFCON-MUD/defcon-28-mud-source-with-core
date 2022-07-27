inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 42, 0 }));
  set_short( "Hallway - x11y42z0" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y42z0.c",
  "north" : DIR+"/rooms/x11y43z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
