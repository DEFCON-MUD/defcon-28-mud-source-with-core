inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 42, 8 }));
  set_short( "Passage - x21y42z8" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y42z8.c",
  "north" : DIR+"/rooms/x21y43z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
