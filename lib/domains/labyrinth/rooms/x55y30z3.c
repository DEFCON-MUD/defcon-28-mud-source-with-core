inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 30, 3 }));
  set_short( "Hallway - x55y30z3" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y31z3.c",
  "south" : DIR+"/rooms/x55y29z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
