inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 46, 8 }));
  set_short( "Hallway - x13y46z8" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y47z8.c",
  "south" : DIR+"/rooms/x13y45z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
