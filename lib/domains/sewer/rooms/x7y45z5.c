inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 45, 5 }));
  set_short( "Hallway - x7y45z5" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y46z5.c",
  "south" : DIR+"/rooms/x7y44z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
