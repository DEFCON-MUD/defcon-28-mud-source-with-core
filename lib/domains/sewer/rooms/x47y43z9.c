inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 43, 9 }));
  set_short( "Corridor - x47y43z9" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y44z9.c",
  "south" : DIR+"/rooms/x47y42z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
