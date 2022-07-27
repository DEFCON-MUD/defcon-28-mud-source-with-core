inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 60, 8 }));
  set_short( "Passage - x5y60z8" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y60z8.c",
  "east" : DIR+"/rooms/x6y60z8.c",
  "north" : DIR+"/rooms/x5y61z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
