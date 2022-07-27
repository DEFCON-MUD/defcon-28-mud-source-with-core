inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 16, 3 }));
  set_short( "Corridor - x3y16z3" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y17z3.c",
  "south" : DIR+"/rooms/x3y15z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
