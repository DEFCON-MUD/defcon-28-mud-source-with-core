inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 36, 7 }));
  set_short( "Hallway - x21y36z7" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y36z7.c",
  "north" : DIR+"/rooms/x21y37z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
