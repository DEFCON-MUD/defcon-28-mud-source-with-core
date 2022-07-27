inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 12, 0 }));
  set_short( "Corridor - x31y12z0" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y12z0.c",
  "south" : DIR+"/rooms/x31y11z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
