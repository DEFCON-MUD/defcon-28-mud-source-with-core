inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 42, 4 }));
  set_short( "Passage - x49y42z4" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y43z4.c",
  "south" : DIR+"/rooms/x49y41z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
