inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 30, 9 }));
  set_short( "Hallway - x5y30z9" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y31z9.c",
  "south" : DIR+"/rooms/x5y29z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
