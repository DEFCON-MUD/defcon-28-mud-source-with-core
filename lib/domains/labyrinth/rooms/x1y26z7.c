inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 26, 7 }));
  set_short( "Passage - x1y26z7" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y26z7.c",
  "north" : DIR+"/rooms/x1y27z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
