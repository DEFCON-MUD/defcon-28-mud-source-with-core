inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 23, 8 }));
  set_short( "Corridor - x31y23z8" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y24z8.c",
  "south" : DIR+"/rooms/x31y22z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
