inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 34, 3 }));
  set_short( "Hallway - x35y34z3" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y35z3.c",
  "south" : DIR+"/rooms/x35y33z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
