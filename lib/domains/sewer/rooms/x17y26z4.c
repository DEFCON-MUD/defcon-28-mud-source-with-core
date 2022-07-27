inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 26, 4 }));
  set_short( "Corridor - x17y26z4" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y26z4.c",
  "north" : DIR+"/rooms/x17y27z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
