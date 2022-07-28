inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 37, 4 }));
  set_short( "Corridor - x11y37z4" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y38z4.c",
  "south" : DIR+"/rooms/x11y36z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
