inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 24, 5 }));
  set_short( "Passage - x3y24z5" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y24z5.c",
  "east" : DIR+"/rooms/x4y24z5.c",
  "south" : DIR+"/rooms/x3y23z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
