inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 36, 3 }));
  set_short( "Passage - x27y36z3" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y36z3.c",
  "south" : DIR+"/rooms/x27y35z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
