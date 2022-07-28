inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 58, 9 }));
  set_short( "Passage - x15y58z9" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y58z9.c",
  "south" : DIR+"/rooms/x15y57z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
