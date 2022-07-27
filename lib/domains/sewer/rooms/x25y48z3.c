inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 48, 3 }));
  set_short( "Passage - x25y48z3" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y48z3.c",
  "south" : DIR+"/rooms/x25y47z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
