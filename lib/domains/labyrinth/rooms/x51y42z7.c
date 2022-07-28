inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 42, 7 }));
  set_short( "Corridor - x51y42z7" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y42z7.c",
  "south" : DIR+"/rooms/x51y41z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
