inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 56, 5 }));
  set_short( "Passage - x53y56z5" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y56z5.c",
  "south" : DIR+"/rooms/x53y55z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
