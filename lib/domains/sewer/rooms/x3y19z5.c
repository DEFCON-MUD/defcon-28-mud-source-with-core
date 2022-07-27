inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 19, 5 }));
  set_short( "Passage - x3y19z5" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y20z5.c",
  "south" : DIR+"/rooms/x3y18z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
