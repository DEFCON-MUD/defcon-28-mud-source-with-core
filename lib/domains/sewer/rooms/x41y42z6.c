inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 42, 6 }));
  set_short( "Passage - x41y42z6" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y43z6.c",
  "south" : DIR+"/rooms/x41y41z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
