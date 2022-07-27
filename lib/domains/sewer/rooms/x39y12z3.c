inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 12, 3 }));
  set_short( "Corridor - x39y12z3" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y12z3.c",
  "south" : DIR+"/rooms/x39y11z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
