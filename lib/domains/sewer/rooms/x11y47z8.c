inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 47, 8 }));
  set_short( "Corridor - x11y47z8" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y48z8.c",
  "south" : DIR+"/rooms/x11y46z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
