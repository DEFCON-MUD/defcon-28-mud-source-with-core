inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 16, 8 }));
  set_short( "Passage - x7y16z8" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y17z8.c",
  "south" : DIR+"/rooms/x7y15z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
