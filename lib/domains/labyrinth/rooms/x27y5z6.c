inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 5, 6 }));
  set_short( "Corridor - x27y5z6" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y6z6.c",
  "south" : DIR+"/rooms/x27y4z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
