inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 59, 8 }));
  set_short( "Corridor - x45y59z8" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y60z8.c",
  "south" : DIR+"/rooms/x45y58z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
