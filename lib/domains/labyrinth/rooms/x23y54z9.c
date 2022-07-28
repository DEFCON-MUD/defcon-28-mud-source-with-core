inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 54, 9 }));
  set_short( "Passage - x23y54z9" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y55z9.c",
  "south" : DIR+"/rooms/x23y53z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
