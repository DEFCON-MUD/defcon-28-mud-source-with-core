inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 50, 5 }));
  set_short( "Passage - x61y50z5" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y50z5.c",
  "south" : DIR+"/rooms/x61y49z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
