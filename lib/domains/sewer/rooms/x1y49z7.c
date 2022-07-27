inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 49, 7 }));
  set_short( "Passage - x1y49z7" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y50z7.c",
  "south" : DIR+"/rooms/x1y48z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
