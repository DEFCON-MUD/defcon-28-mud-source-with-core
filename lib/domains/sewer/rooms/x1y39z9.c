inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 39, 9 }));
  set_short( "Hallway - x1y39z9" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y40z9.c",
  "south" : DIR+"/rooms/x1y38z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
