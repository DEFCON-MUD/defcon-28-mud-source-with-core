inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 4, 5 }));
  set_short( "Passage - x53y4z5" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y4z5.c",
  "south" : DIR+"/rooms/x53y3z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
