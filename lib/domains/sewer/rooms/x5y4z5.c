inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 4, 5 }));
  set_short( "Hallway - x5y4z5" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y4z5.c",
  "south" : DIR+"/rooms/x5y3z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
