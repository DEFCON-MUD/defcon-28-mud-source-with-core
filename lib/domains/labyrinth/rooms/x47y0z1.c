inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 0, 1 }));
  set_short( "Corridor - x47y0z1" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y0z1.c",
  "east" : DIR+"/rooms/x48y0z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
