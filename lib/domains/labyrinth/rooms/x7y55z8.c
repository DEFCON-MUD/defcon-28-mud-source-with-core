inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 55, 8 }));
  set_short( "Passage - x7y55z8" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y56z8.c",
  "south" : DIR+"/rooms/x7y54z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
