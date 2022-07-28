inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 48, 4 }));
  set_short( "Passage - x41y48z4" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y49z4.c",
  "south" : DIR+"/rooms/x41y47z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
