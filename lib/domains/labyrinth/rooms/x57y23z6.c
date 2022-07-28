inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 23, 6 }));
  set_short( "Passage - x57y23z6" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y24z6.c",
  "south" : DIR+"/rooms/x57y22z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
