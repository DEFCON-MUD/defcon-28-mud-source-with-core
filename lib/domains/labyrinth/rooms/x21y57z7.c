inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 57, 7 }));
  set_short( "Corridor - x21y57z7" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y58z7.c",
  "south" : DIR+"/rooms/x21y56z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
