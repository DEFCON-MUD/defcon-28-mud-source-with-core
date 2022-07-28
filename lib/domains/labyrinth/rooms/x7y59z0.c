inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 59, 0 }));
  set_short( "Passage - x7y59z0" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y60z0.c",
  "south" : DIR+"/rooms/x7y58z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
