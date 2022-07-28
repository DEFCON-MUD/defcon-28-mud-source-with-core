inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 8, 7 }));
  set_short( "Passage - x2y8z7" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y8z7.c",
  "east" : DIR+"/rooms/x3y8z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
