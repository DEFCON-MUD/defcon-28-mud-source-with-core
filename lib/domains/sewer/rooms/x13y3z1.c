inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 3, 1 }));
  set_short( "Passage - x13y3z1" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y4z1.c",
  "south" : DIR+"/rooms/x13y2z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
