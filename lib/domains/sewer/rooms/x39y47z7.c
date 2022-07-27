inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 47, 7 }));
  set_short( "Corridor - x39y47z7" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y48z7.c",
  "south" : DIR+"/rooms/x39y46z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
