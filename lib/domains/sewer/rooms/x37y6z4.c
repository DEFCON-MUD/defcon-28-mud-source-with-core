inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 6, 4 }));
  set_short( "Corridor - x37y6z4" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y6z4.c",
  "east" : DIR+"/rooms/x38y6z4.c",
  "north" : DIR+"/rooms/x37y7z4.c",
  "south" : DIR+"/rooms/x37y5z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
