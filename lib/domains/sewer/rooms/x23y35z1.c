inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 35, 1 }));
  set_short( "Passage - x23y35z1" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y36z1.c",
  "south" : DIR+"/rooms/x23y34z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
