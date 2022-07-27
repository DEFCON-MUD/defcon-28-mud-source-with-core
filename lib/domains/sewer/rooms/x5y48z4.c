inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 48, 4 }));
  set_short( "Corridor - x5y48z4" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y48z4.c",
  "north" : DIR+"/rooms/x5y49z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
