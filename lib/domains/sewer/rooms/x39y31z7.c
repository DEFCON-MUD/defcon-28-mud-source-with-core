inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 31, 7 }));
  set_short( "Passage - x39y31z7" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y32z7.c",
  "south" : DIR+"/rooms/x39y30z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
