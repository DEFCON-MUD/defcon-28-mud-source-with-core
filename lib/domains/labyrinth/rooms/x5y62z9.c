inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 62, 9 }));
  set_short( "Corridor - x5y62z9" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y62z9.c",
  "east" : DIR+"/rooms/x6y62z9.c",
  "south" : DIR+"/rooms/x5y61z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
