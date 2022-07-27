inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 37, 4 }));
  set_short( "Passage - x53y37z4" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y38z4.c",
  "south" : DIR+"/rooms/x53y36z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
