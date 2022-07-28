inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 28, 5 }));
  set_short( "Passage - x13y28z5" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y28z5.c",
  "north" : DIR+"/rooms/x13y29z5.c",
  "south" : DIR+"/rooms/x13y27z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
