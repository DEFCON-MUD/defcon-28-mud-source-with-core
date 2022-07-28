inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 54, 6 }));
  set_short( "Passage - x41y54z6" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y54z6.c",
  "south" : DIR+"/rooms/x41y53z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
