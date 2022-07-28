inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 26, 6 }));
  set_short( "Hallway - x17y26z6" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y26z6.c",
  "north" : DIR+"/rooms/x17y27z6.c",
  "south" : DIR+"/rooms/x17y25z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
