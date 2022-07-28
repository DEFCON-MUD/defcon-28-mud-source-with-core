inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 24, 5 }));
  set_short( "Passage - x51y24z5" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y24z5.c",
  "north" : DIR+"/rooms/x51y25z5.c",
  "south" : DIR+"/rooms/x51y23z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
