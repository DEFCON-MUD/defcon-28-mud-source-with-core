inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 44, 6 }));
  set_short( "Corridor - x33y44z6" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y45z6.c",
  "south" : DIR+"/rooms/x33y43z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
