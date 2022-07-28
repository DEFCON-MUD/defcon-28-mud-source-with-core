inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 24, 9 }));
  set_short( "Hallway - x21y24z9" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y24z9.c",
  "north" : DIR+"/rooms/x21y25z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
