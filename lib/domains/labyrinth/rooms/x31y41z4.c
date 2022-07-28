inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 41, 4 }));
  set_short( "Passage - x31y41z4" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y42z4.c",
  "south" : DIR+"/rooms/x31y40z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
