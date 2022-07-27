inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 33, 6 }));
  set_short( "Corridor - x13y33z6" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y34z6.c",
  "south" : DIR+"/rooms/x13y32z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
