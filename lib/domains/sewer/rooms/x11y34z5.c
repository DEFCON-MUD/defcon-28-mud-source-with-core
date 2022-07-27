inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 34, 5 }));
  set_short( "Passage - x11y34z5" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y35z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
