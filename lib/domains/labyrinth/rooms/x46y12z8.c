inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 12, 8 }));
  set_short( "Passage - x46y12z8" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y12z8.c",
  "east" : DIR+"/rooms/x47y12z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
