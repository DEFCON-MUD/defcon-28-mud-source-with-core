inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 4 }));
  set_short( "Passage - x59y52z4" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y52z4.c",
  "north" : DIR+"/rooms/x59y53z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
