inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 42, 8 }));
  set_short( "Hallway - x6y42z8" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y42z8.c",
  "east" : DIR+"/rooms/x7y42z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
