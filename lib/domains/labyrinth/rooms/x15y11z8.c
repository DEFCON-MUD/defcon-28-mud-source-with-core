inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 11, 8 }));
  set_short( "Corridor - x15y11z8" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y12z8.c",
  "south" : DIR+"/rooms/x15y10z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
