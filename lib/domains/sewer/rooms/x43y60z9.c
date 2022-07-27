inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 60, 9 }));
  set_short( "Corridor - x43y60z9" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y60z9.c",
  "north" : DIR+"/rooms/x43y61z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
