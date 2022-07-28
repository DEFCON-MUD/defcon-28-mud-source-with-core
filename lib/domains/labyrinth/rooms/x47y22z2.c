inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 22, 2 }));
  set_short( "Hallway - x47y22z2" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y22z2.c",
  "north" : DIR+"/rooms/x47y23z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
