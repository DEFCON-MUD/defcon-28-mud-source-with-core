inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 18, 6 }));
  set_short( "Corridor - x59y18z6" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y18z6.c",
  "north" : DIR+"/rooms/x59y19z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
