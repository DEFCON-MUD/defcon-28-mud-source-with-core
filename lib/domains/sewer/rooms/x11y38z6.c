inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 6 }));
  set_short( "Passage - x11y38z6" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y38z6.c",
  "north" : DIR+"/rooms/x11y39z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
