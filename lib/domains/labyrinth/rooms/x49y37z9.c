inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 37, 9 }));
  set_short( "Passage - x49y37z9" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y38z9.c",
  "south" : DIR+"/rooms/x49y36z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
