inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 62, 7 }));
  set_short( "Hallway - x8y62z7" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y62z7.c",
  "east" : DIR+"/rooms/x9y62z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
