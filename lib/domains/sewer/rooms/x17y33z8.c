inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 33, 8 }));
  set_short( "Corridor - x17y33z8" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y34z8.c",
  "south" : DIR+"/rooms/x17y32z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
