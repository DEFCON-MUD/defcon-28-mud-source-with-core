inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 14, 4 }));
  set_short( "Corridor - x35y14z4" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y14z4.c",
  "east" : DIR+"/rooms/x36y14z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
