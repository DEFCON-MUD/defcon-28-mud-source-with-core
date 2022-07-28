inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 58, 5 }));
  set_short( "Corridor - x33y58z5" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y58z5.c",
  "north" : DIR+"/rooms/x33y59z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
