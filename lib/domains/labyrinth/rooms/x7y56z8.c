inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 56, 8 }));
  set_short( "Passage - x7y56z8" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y56z8.c",
  "east" : DIR+"/rooms/x8y56z8.c",
  "north" : DIR+"/rooms/x7y57z8.c",
  "south" : DIR+"/rooms/x7y55z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
