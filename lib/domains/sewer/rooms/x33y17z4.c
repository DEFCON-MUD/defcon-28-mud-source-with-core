inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 17, 4 }));
  set_short( "Hallway - x33y17z4" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y18z4.c",
  "south" : DIR+"/rooms/x33y16z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
