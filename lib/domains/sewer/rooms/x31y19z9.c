inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 19, 9 }));
  set_short( "Hallway - x31y19z9" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y20z9.c",
  "south" : DIR+"/rooms/x31y18z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
