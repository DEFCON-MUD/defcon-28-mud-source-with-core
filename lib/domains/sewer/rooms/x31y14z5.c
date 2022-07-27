inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 14, 5 }));
  set_short( "Passage - x31y14z5" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y14z5.c",
  "south" : DIR+"/rooms/x31y13z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
