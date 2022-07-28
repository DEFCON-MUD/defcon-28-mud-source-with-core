inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 48, 2 }));
  set_short( "Passage - x31y48z2" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y48z2.c",
  "east" : DIR+"/rooms/x32y48z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
