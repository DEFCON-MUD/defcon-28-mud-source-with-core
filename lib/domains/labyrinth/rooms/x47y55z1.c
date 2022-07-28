inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 55, 1 }));
  set_short( "Passage - x47y55z1" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y56z1.c",
  "south" : DIR+"/rooms/x47y54z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
