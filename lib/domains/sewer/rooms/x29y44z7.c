inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 44, 7 }));
  set_short( "Passage - x29y44z7" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y45z7.c",
  "south" : DIR+"/rooms/x29y43z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
