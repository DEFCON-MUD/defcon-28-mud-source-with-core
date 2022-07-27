inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 57, 5 }));
  set_short( "Hallway - x11y57z5" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y58z5.c",
  "south" : DIR+"/rooms/x11y56z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
