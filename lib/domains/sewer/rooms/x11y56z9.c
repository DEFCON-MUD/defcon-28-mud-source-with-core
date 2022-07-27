inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 56, 9 }));
  set_short( "Corridor - x11y56z9" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y56z9.c",
  "north" : DIR+"/rooms/x11y57z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
