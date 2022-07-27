inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 9 }));
  set_short( "Passage - x17y22z9" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y22z9.c",
  "north" : DIR+"/rooms/x17y23z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
