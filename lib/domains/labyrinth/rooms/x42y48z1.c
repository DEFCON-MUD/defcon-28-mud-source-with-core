inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 48, 1 }));
  set_short( "Hallway - x42y48z1" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y48z1.c",
  "east" : DIR+"/rooms/x43y48z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
