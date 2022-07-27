inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 28, 4 }));
  set_short( "Hallway - x13y28z4" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y28z4.c",
  "south" : DIR+"/rooms/x13y27z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
