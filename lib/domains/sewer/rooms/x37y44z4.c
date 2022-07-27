inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 44, 4 }));
  set_short( "Corridor - x37y44z4" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y44z4.c",
  "north" : DIR+"/rooms/x37y45z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
