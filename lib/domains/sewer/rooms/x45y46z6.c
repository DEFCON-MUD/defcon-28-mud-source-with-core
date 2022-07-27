inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 46, 6 }));
  set_short( "Hallway - x45y46z6" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y46z6.c",
  "south" : DIR+"/rooms/x45y45z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
