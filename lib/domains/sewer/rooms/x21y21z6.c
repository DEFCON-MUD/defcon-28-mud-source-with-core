inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 21, 6 }));
  set_short( "Passage - x21y21z6" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y22z6.c",
  "south" : DIR+"/rooms/x21y20z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
