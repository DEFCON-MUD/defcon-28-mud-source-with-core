inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 54, 8 }));
  set_short( "Corridor - x61y54z8" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y54z8.c",
  "north" : DIR+"/rooms/x61y55z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
