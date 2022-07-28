inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 50, 1 }));
  set_short( "Corridor - x23y50z1" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y51z1.c",
  "south" : DIR+"/rooms/x23y49z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
