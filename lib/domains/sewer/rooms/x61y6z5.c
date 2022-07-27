inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 6, 5 }));
  set_short( "Passage - x61y6z5" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y7z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
