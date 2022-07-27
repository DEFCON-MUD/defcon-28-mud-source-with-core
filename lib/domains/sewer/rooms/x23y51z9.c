inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 51, 9 }));
  set_short( "Hallway - x23y51z9" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y52z9.c",
  "south" : DIR+"/rooms/x23y50z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
