inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 14, 6 }));
  set_short( "Hallway - x37y14z6" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y14z6.c",
  "east" : DIR+"/rooms/x38y14z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
