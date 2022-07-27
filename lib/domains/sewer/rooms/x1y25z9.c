inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 25, 9 }));
  set_short( "Passage - x1y25z9" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y26z9.c",
  "south" : DIR+"/rooms/x1y24z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
