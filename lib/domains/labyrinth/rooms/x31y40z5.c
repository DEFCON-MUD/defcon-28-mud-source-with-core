inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 40, 5 }));
  set_short( "Corridor - x31y40z5" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y40z5.c",
  "east" : DIR+"/rooms/x32y40z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
