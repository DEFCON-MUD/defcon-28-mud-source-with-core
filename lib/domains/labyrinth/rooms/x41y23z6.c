inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 23, 6 }));
  set_short( "Passage - x41y23z6" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y24z6.c",
  "south" : DIR+"/rooms/x41y22z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
