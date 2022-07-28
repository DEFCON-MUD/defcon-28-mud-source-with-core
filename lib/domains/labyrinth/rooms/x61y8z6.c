inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 8, 6 }));
  set_short( "Passage - x61y8z6" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y8z6.c",
  "south" : DIR+"/rooms/x61y7z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
