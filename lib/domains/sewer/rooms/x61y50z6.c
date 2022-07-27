inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 50, 6 }));
  set_short( "Passage - x61y50z6" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y50z6.c",
  "south" : DIR+"/rooms/x61y49z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
