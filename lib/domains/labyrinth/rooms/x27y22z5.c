inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 22, 5 }));
  set_short( "Passage - x27y22z5" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y23z5.c",
  "south" : DIR+"/rooms/x27y21z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
