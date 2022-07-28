inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 38, 3 }));
  set_short( "Passage - x43y38z3" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y38z3.c",
  "south" : DIR+"/rooms/x43y37z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
