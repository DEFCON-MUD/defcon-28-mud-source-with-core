inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 17, 4 }));
  set_short( "Passage - x47y17z4" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y18z4.c",
  "south" : DIR+"/rooms/x47y16z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
