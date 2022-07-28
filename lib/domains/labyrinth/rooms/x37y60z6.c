inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 60, 6 }));
  set_short( "Corridor - x37y60z6" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y60z6.c",
  "east" : DIR+"/rooms/x38y60z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
