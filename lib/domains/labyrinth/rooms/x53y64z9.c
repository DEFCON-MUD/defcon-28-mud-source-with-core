inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 64, 9 }));
  set_short( "Corridor - x53y64z9" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y64z9.c",
  "east" : DIR+"/rooms/x54y64z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
