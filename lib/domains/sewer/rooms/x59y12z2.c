inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 12, 2 }));
  set_short( "Hallway - x59y12z2" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y12z2.c",
  "north" : DIR+"/rooms/x59y13z2.c",
  "south" : DIR+"/rooms/x59y11z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
