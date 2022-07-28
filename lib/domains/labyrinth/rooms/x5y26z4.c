inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 26, 4 }));
  set_short( "Corridor - x5y26z4" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y26z4.c",
  "south" : DIR+"/rooms/x5y25z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
