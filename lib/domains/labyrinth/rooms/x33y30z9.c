inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 30, 9 }));
  set_short( "Passage - x33y30z9" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y30z9.c",
  "north" : DIR+"/rooms/x33y31z9.c",
  "south" : DIR+"/rooms/x33y29z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
