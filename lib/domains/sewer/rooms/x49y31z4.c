inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 31, 4 }));
  set_short( "Hallway - x49y31z4" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y32z4.c",
  "south" : DIR+"/rooms/x49y30z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
