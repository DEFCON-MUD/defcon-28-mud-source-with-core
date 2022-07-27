inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 22, 6 }));
  set_short( "Passage - x27y22z6" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y22z6.c",
  "north" : DIR+"/rooms/x27y23z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
