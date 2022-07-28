inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 19, 4 }));
  set_short( "Passage - x43y19z4" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y20z4.c",
  "south" : DIR+"/rooms/x43y18z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
