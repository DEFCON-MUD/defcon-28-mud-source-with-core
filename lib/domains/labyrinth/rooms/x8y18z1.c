inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 18, 1 }));
  set_short( "Passage - x8y18z1" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y18z1.c",
  "east" : DIR+"/rooms/x9y18z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
