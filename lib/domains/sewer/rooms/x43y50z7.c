inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 50, 7 }));
  set_short( "Passage - x43y50z7" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y51z7.c",
  "south" : DIR+"/rooms/x43y49z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
