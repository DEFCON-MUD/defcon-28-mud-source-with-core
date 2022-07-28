inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 12, 6 }));
  set_short( "Passage - x53y12z6" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y12z6.c",
  "east" : DIR+"/rooms/x54y12z6.c",
  "south" : DIR+"/rooms/x53y11z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
