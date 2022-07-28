inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 24, 1 }));
  set_short( "Passage - x33y24z1" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y24z1.c",
  "north" : DIR+"/rooms/x33y25z1.c",
  "south" : DIR+"/rooms/x33y23z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
