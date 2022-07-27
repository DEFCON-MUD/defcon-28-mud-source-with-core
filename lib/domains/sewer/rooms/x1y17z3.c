inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 17, 3 }));
  set_short( "Corridor - x1y17z3" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y18z3.c",
  "south" : DIR+"/rooms/x1y16z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
