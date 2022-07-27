inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 30, 2 }));
  set_short( "Passage - x27y30z2" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y30z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
