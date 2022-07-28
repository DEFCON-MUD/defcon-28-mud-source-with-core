inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 42, 3 }));
  set_short( "Passage - x23y42z3" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y42z3.c",
  "east" : DIR+"/rooms/x24y42z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
