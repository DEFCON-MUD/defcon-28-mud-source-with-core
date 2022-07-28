inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 60, 7 }));
  set_short( "Passage - x50y60z7" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y60z7.c",
  "east" : DIR+"/rooms/x51y60z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
