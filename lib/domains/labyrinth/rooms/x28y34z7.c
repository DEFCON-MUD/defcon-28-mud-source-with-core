inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 34, 7 }));
  set_short( "Passage - x28y34z7" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y34z7.c",
  "east" : DIR+"/rooms/x29y34z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
