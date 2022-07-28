inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 42, 5 }));
  set_short( "Passage - x27y42z5" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y42z5.c",
  "north" : DIR+"/rooms/x27y43z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
