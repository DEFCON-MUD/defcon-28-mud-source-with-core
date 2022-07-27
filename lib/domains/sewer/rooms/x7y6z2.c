inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 6, 2 }));
  set_short( "Corridor - x7y6z2" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y6z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
