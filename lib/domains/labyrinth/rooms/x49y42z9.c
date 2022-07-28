inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 42, 9 }));
  set_short( "Corridor - x49y42z9" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y43z9.c",
  "south" : DIR+"/rooms/x49y41z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
