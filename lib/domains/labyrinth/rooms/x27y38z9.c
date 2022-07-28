inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 38, 9 }));
  set_short( "Passage - x27y38z9" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y38z9.c",
  "east" : DIR+"/rooms/x28y38z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
