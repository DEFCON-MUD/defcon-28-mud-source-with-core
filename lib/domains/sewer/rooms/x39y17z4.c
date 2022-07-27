inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 17, 4 }));
  set_short( "Passage - x39y17z4" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y18z4.c",
  "south" : DIR+"/rooms/x39y16z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
