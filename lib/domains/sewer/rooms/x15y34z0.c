inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 34, 0 }));
  set_short( "Passage - x15y34z0" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y34z0.c",
  "south" : DIR+"/rooms/x15y33z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
