inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 23, 7 }));
  set_short( "Corridor - x47y23z7" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y24z7.c",
  "south" : DIR+"/rooms/x47y22z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
