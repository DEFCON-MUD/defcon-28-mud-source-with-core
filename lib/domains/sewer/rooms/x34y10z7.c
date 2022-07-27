inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 10, 7 }));
  set_short( "Hallway - x34y10z7" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y10z7.c",
  "east" : DIR+"/rooms/x35y10z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
