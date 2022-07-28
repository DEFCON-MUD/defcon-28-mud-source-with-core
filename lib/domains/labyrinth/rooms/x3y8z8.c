inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 8, 8 }));
  set_short( "Passage - x3y8z8" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y8z8.c",
  "north" : DIR+"/rooms/x3y9z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
