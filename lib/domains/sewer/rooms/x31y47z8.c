inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 47, 8 }));
  set_short( "Corridor - x31y47z8" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y48z8.c",
  "south" : DIR+"/rooms/x31y46z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
