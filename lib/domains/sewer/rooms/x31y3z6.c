inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 3, 6 }));
  set_short( "Hallway - x31y3z6" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y4z6.c",
  "south" : DIR+"/rooms/x31y2z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
