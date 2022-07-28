inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 47, 6 }));
  set_short( "Passage - x9y47z6" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y48z6.c",
  "south" : DIR+"/rooms/x9y46z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
