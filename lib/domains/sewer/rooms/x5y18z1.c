inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 18, 1 }));
  set_short( "Hallway - x5y18z1" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y18z1.c",
  "south" : DIR+"/rooms/x5y17z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
