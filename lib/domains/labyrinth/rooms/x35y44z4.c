inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 44, 4 }));
  set_short( "Passage - x35y44z4" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y44z4.c",
  "east" : DIR+"/rooms/x36y44z4.c",
  "north" : DIR+"/rooms/x35y45z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
