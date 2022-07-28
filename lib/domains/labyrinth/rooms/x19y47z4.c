inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 47, 4 }));
  set_short( "Passage - x19y47z4" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y48z4.c",
  "south" : DIR+"/rooms/x19y46z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
