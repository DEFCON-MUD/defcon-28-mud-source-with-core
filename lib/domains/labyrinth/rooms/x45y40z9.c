inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 40, 9 }));
  set_short( "Corridor - x45y40z9" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y40z9.c",
  "south" : DIR+"/rooms/x45y39z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
