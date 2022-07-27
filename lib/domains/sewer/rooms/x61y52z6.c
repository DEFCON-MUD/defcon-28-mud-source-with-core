inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 6 }));
  set_short( "Corridor - x61y52z6" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y52z6.c",
  "north" : DIR+"/rooms/x61y53z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
