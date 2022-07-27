inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 61, 6 }));
  set_short( "Passage - x11y61z6" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y62z6.c",
  "south" : DIR+"/rooms/x11y60z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
