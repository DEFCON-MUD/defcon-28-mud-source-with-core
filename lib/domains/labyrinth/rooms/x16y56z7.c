inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 56, 7 }));
  set_short( "Passage - x16y56z7" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y56z7.c",
  "east" : DIR+"/rooms/x17y56z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
