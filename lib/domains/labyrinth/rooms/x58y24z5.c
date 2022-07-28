inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 24, 5 }));
  set_short( "Corridor - x58y24z5" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y24z5.c",
  "east" : DIR+"/rooms/x59y24z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
