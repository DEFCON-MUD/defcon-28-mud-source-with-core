inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 7, 4 }));
  set_short( "Corridor - x31y7z4" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y8z4.c",
  "south" : DIR+"/rooms/x31y6z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
