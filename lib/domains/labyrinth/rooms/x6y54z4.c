inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 54, 4 }));
  set_short( "Passage - x6y54z4" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y54z4.c",
  "east" : DIR+"/rooms/x7y54z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
