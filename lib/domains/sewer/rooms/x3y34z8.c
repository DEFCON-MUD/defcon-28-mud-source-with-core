inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 34, 8 }));
  set_short( "Passage - x3y34z8" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y35z8.c",
  "south" : DIR+"/rooms/x3y33z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
