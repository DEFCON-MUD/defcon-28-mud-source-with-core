inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 13, 2 }));
  set_short( "Corridor - x3y13z2" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y14z2.c",
  "south" : DIR+"/rooms/x3y12z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
