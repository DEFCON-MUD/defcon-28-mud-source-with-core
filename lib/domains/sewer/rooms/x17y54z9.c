inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 54, 9 }));
  set_short( "Passage - x17y54z9" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y54z9.c",
  "south" : DIR+"/rooms/x17y53z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
