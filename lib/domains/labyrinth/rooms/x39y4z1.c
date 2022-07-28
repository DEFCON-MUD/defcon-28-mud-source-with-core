inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 4, 1 }));
  set_short( "Corridor - x39y4z1" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y4z1.c",
  "south" : DIR+"/rooms/x39y3z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
