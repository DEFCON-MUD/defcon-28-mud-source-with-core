inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 42, 9 }));
  set_short( "Passage - x5y42z9" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y42z9.c",
  "north" : DIR+"/rooms/x5y43z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
