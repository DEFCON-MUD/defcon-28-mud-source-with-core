inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 42, 6 }));
  set_short( "Hallway - x49y42z6" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y42z6.c",
  "north" : DIR+"/rooms/x49y43z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
