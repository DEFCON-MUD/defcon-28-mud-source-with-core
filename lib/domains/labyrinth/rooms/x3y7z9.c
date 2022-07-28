inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 7, 9 }));
  set_short( "Corridor - x3y7z9" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y8z9.c",
  "south" : DIR+"/rooms/x3y6z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
