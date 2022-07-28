inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 53, 4 }));
  set_short( "Passage - x29y53z4" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y54z4.c",
  "south" : DIR+"/rooms/x29y52z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
