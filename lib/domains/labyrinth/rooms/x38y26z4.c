inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 26, 4 }));
  set_short( "Passage - x38y26z4" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y26z4.c",
  "east" : DIR+"/rooms/x39y26z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
