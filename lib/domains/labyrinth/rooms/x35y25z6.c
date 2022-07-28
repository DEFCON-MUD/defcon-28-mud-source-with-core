inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 25, 6 }));
  set_short( "Passage - x35y25z6" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y26z6.c",
  "south" : DIR+"/rooms/x35y24z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
