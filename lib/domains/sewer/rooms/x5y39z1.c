inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 39, 1 }));
  set_short( "Passage - x5y39z1" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y40z1.c",
  "south" : DIR+"/rooms/x5y38z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
