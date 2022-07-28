inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 10, 7 }));
  set_short( "Hallway - x40y10z7" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y10z7.c",
  "east" : DIR+"/rooms/x41y10z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
