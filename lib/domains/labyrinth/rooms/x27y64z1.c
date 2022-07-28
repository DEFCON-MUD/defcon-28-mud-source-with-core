inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 64, 1 }));
  set_short( "Passage - x27y64z1" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y64z1.c",
  "east" : DIR+"/rooms/x28y64z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
