inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 40, 5 }));
  set_short( "Corridor - x18y40z5" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y40z5.c",
  "east" : DIR+"/rooms/x19y40z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
