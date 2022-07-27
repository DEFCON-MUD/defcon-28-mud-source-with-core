inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 22, 2 }));
  set_short( "Corridor - x7y22z2" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "south" : DIR+"/rooms/x7y21z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
