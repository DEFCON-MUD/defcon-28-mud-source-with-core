inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 58, 5 }));
  set_short( "Passage - x31y58z5" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "south" : DIR+"/rooms/x31y57z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
