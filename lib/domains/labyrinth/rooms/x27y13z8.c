inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 13, 8 }));
  set_short( "Passage - x27y13z8" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y14z8.c",
  "south" : DIR+"/rooms/x27y12z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
