inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 56, 8 }));
  set_short( "Passage - x54y56z8" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y56z8.c",
  "east" : DIR+"/rooms/x55y56z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
