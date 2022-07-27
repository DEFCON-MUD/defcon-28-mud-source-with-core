inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 48, 9 }));
  set_short( "Corridor - x35y48z9" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y48z9.c",
  "south" : DIR+"/rooms/x35y47z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
