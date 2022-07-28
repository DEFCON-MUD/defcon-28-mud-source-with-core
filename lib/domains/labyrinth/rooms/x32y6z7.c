inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 6, 7 }));
  set_short( "Hallway - x32y6z7" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y6z7.c",
  "east" : DIR+"/rooms/x33y6z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
