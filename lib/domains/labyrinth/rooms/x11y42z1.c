inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 42, 1 }));
  set_short( "Corridor - x11y42z1" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y42z1.c",
  "south" : DIR+"/rooms/x11y41z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
