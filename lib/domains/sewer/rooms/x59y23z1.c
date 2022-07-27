inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 23, 1 }));
  set_short( "Passage - x59y23z1" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y24z1.c",
  "south" : DIR+"/rooms/x59y22z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
