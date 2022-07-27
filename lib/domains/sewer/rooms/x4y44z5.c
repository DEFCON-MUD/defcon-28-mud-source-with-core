inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 44, 5 }));
  set_short( "Corridor - x4y44z5" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y44z5.c",
  "east" : DIR+"/rooms/x5y44z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
