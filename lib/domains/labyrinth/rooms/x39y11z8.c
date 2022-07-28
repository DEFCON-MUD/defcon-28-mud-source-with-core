inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 11, 8 }));
  set_short( "Corridor - x39y11z8" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y12z8.c",
  "south" : DIR+"/rooms/x39y10z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
