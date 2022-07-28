inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 64, 3 }));
  set_short( "Passage - x16y64z3" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y64z3.c",
  "east" : DIR+"/rooms/x17y64z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
