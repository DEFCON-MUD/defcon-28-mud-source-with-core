inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 46, 6 }));
  set_short( "Corridor - x25y46z6" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y46z6.c",
  "north" : DIR+"/rooms/x25y47z6.c",
  "south" : DIR+"/rooms/x25y45z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
