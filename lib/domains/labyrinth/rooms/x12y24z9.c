inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 24, 9 }));
  set_short( "Corridor - x12y24z9" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y24z9.c",
  "east" : DIR+"/rooms/x13y24z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
