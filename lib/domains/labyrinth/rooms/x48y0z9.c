inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 0, 9 }));
  set_short( "Corridor - x48y0z9" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y0z9.c",
  "east" : DIR+"/rooms/x49y0z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
