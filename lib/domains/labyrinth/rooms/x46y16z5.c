inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 16, 5 }));
  set_short( "Hallway - x46y16z5" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y16z5.c",
  "east" : DIR+"/rooms/x47y16z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
