inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 24, 5 }));
  set_short( "Passage - x17y24z5" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y24z5.c",
  "south" : DIR+"/rooms/x17y23z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
