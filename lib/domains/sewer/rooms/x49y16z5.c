inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 5 }));
  set_short( "Corridor - x49y16z5" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y16z5.c",
  "north" : DIR+"/rooms/x49y17z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
