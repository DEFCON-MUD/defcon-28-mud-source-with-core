inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 64, 7 }));
  set_short( "Passage - x27y64z7" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y64z7.c",
  "east" : DIR+"/rooms/x28y64z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
