inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 7 }));
  set_short( "Corridor - x11y38z7" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y38z7.c",
  "north" : DIR+"/rooms/x11y39z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
