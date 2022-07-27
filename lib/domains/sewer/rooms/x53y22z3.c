inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 3 }));
  set_short( "Corridor - x53y22z3" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y22z3.c",
  "north" : DIR+"/rooms/x53y23z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
