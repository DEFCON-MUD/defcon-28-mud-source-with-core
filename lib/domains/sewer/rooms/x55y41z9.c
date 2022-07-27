inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 41, 9 }));
  set_short( "Corridor - x55y41z9" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y42z9.c",
  "south" : DIR+"/rooms/x55y40z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
