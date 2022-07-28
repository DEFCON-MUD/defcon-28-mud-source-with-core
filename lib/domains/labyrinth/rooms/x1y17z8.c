inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 17, 8 }));
  set_short( "Passage - x1y17z8" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y18z8.c",
  "south" : DIR+"/rooms/x1y16z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
