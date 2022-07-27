inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 48, 8 }));
  set_short( "Hallway - x34y48z8" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y48z8.c",
  "east" : DIR+"/rooms/x35y48z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
