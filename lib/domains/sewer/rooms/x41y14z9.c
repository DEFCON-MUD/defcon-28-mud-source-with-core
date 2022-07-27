inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 14, 9 }));
  set_short( "Passage - x41y14z9" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y14z9.c",
  "south" : DIR+"/rooms/x41y13z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
