inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 5, 5 }));
  set_short( "Corridor - x19y5z5" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y6z5.c",
  "south" : DIR+"/rooms/x19y4z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
