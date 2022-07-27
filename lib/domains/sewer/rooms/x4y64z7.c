inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 64, 7 }));
  set_short( "Corridor - x4y64z7" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y64z7.c",
  "east" : DIR+"/rooms/x5y64z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
