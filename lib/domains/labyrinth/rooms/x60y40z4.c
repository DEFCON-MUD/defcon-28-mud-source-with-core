inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 40, 4 }));
  set_short( "Corridor - x60y40z4" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y40z4.c",
  "east" : DIR+"/rooms/x61y40z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
