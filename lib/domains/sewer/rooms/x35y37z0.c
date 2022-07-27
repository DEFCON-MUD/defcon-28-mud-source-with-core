inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 37, 0 }));
  set_short( "Passage - x35y37z0" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y38z0.c",
  "south" : DIR+"/rooms/x35y36z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
