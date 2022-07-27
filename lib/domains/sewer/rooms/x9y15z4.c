inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 15, 4 }));
  set_short( "Corridor - x9y15z4" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y16z4.c",
  "south" : DIR+"/rooms/x9y14z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
