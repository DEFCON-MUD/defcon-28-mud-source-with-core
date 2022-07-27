inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 42, 9 }));
  set_short( "Corridor - x51y42z9" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y42z9.c",
  "south" : DIR+"/rooms/x51y41z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
