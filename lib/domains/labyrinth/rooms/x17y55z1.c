inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 55, 1 }));
  set_short( "Corridor - x17y55z1" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y56z1.c",
  "south" : DIR+"/rooms/x17y54z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
