inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 5 }));
  set_short( "Corridor - x39y6z5" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y6z5.c",
  "north" : DIR+"/rooms/x39y7z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
