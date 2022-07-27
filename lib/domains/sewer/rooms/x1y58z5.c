inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 58, 5 }));
  set_short( "Corridor - x1y58z5" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y58z5.c",
  "south" : DIR+"/rooms/x1y57z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
