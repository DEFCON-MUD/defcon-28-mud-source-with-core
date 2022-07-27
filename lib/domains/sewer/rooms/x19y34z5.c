inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 34, 5 }));
  set_short( "Hallway - x19y34z5" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y34z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
