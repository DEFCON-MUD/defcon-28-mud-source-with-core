inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 13, 9 }));
  set_short( "Passage - x45y13z9" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y14z9.c",
  "south" : DIR+"/rooms/x45y12z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
