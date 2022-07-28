inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 12, 1 }));
  set_short( "Corridor - x39y12z1" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y12z1.c",
  "east" : DIR+"/rooms/x40y12z1.c",
  "north" : DIR+"/rooms/x39y13z1.c",
  "south" : DIR+"/rooms/x39y11z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
