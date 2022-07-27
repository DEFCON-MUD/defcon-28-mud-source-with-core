inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 55, 1 }));
  set_short( "Passage - x23y55z1" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y56z1.c",
  "south" : DIR+"/rooms/x23y54z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
