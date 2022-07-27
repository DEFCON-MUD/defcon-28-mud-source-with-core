inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 20, 7 }));
  set_short( "Corridor - x32y20z7" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y20z7.c",
  "east" : DIR+"/rooms/x33y20z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
