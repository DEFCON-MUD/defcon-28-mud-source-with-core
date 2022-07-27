inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 6 }));
  set_short( "Passage - x17y22z6" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y22z6.c",
  "north" : DIR+"/rooms/x17y23z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
