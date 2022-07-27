inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 14, 5 }));
  set_short( "Passage - x60y14z5" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y14z5.c",
  "east" : DIR+"/rooms/x61y14z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
