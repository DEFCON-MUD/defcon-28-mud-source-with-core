inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 8, 5 }));
  set_short( "Passage - x17y8z5" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y8z5.c",
  "east" : DIR+"/rooms/x18y8z5.c",
  "south" : DIR+"/rooms/x17y7z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
