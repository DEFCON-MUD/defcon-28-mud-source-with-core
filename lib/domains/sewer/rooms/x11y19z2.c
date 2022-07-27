inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 19, 2 }));
  set_short( "Corridor - x11y19z2" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y20z2.c",
  "south" : DIR+"/rooms/x11y18z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
