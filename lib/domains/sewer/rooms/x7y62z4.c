inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 62, 4 }));
  set_short( "Corridor - x7y62z4" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y62z4.c",
  "east" : DIR+"/rooms/x8y62z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
