inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 17, 6 }));
  set_short( "Hallway - x53y17z6" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y18z6.c",
  "south" : DIR+"/rooms/x53y16z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
