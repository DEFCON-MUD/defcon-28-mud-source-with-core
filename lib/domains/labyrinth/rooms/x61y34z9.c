inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 34, 9 }));
  set_short( "Corridor - x61y34z9" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y34z9.c",
  "north" : DIR+"/rooms/x61y35z9.c",
  "south" : DIR+"/rooms/x61y33z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
