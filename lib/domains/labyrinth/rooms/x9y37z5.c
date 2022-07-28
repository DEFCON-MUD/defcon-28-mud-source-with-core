inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 37, 5 }));
  set_short( "Corridor - x9y37z5" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y38z5.c",
  "south" : DIR+"/rooms/x9y36z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
