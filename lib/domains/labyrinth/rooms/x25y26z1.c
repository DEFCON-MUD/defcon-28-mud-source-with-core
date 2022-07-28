inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 26, 1 }));
  set_short( "Corridor - x25y26z1" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y26z1.c",
  "east" : DIR+"/rooms/x26y26z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
