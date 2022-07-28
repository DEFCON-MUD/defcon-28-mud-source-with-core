inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 25, 7 }));
  set_short( "Passage - x35y25z7" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y26z7.c",
  "south" : DIR+"/rooms/x35y24z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
