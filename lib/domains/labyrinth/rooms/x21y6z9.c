inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 6, 9 }));
  set_short( "Passage - x21y6z9" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y6z9.c",
  "south" : DIR+"/rooms/x21y5z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
