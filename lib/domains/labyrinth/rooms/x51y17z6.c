inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 17, 6 }));
  set_short( "Corridor - x51y17z6" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y18z6.c",
  "south" : DIR+"/rooms/x51y16z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
