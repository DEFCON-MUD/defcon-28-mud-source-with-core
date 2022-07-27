inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 62, 6 }));
  set_short( "Passage - x9y62z6" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y62z6.c",
  "south" : DIR+"/rooms/x9y61z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
