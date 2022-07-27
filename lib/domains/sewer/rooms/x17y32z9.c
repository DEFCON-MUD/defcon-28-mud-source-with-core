inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 32, 9 }));
  set_short( "Hallway - x17y32z9" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y32z9.c",
  "south" : DIR+"/rooms/x17y31z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
