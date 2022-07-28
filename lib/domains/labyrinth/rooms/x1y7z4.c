inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 7, 4 }));
  set_short( "Passage - x1y7z4" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y8z4.c",
  "south" : DIR+"/rooms/x1y6z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
