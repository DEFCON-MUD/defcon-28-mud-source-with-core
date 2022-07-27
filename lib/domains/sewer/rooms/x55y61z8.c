inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 61, 8 }));
  set_short( "Passage - x55y61z8" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y62z8.c",
  "south" : DIR+"/rooms/x55y60z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
