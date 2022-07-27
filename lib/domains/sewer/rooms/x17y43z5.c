inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 43, 5 }));
  set_short( "Passage - x17y43z5" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y44z5.c",
  "south" : DIR+"/rooms/x17y42z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
