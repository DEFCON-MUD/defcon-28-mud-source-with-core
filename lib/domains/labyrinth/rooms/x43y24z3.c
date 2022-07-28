inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 24, 3 }));
  set_short( "Passage - x43y24z3" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y25z3.c",
  "south" : DIR+"/rooms/x43y23z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
