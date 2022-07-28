inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 26, 9 }));
  set_short( "Corridor - x21y26z9" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y27z9.c",
  "south" : DIR+"/rooms/x21y25z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
