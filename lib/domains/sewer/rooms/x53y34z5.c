inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 34, 5 }));
  set_short( "Hallway - x53y34z5" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y34z5.c",
  "north" : DIR+"/rooms/x53y35z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
