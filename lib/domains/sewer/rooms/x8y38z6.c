inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 38, 6 }));
  set_short( "Corridor - x8y38z6" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y38z6.c",
  "east" : DIR+"/rooms/x9y38z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
