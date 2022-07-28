inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 7, 4 }));
  set_short( "Passage - x13y7z4" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y8z4.c",
  "south" : DIR+"/rooms/x13y6z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
