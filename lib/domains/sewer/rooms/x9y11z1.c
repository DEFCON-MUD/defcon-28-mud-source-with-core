inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 11, 1 }));
  set_short( "Corridor - x9y11z1" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y12z1.c",
  "south" : DIR+"/rooms/x9y10z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
