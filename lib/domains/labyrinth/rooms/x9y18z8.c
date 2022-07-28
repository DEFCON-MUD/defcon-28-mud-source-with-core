inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 18, 8 }));
  set_short( "Passage - x9y18z8" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y19z8.c",
  "south" : DIR+"/rooms/x9y17z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
