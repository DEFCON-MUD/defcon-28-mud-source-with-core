inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 55, 6 }));
  set_short( "Passage - x17y55z6" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y56z6.c",
  "south" : DIR+"/rooms/x17y54z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
