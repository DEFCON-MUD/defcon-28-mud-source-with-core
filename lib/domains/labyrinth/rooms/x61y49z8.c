inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 49, 8 }));
  set_short( "Corridor - x61y49z8" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y50z8.c",
  "south" : DIR+"/rooms/x61y48z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
