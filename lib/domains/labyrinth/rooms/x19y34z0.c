inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 34, 0 }));
  set_short( "Corridor - x19y34z0" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y35z0.c",
  "south" : DIR+"/rooms/x19y33z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
