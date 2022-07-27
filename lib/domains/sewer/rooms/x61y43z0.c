inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 43, 0 }));
  set_short( "Passage - x61y43z0" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y44z0.c",
  "south" : DIR+"/rooms/x61y42z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
