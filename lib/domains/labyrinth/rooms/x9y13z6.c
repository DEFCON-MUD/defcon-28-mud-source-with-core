inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 13, 6 }));
  set_short( "Hallway - x9y13z6" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y14z6.c",
  "south" : DIR+"/rooms/x9y12z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
