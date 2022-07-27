inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 38, 7 }));
  set_short( "Corridor - x18y38z7" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y38z7.c",
  "east" : DIR+"/rooms/x19y38z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
