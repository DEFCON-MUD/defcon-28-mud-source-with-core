inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 45, 8 }));
  set_short( "Passage - x49y45z8" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y46z8.c",
  "south" : DIR+"/rooms/x49y44z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
