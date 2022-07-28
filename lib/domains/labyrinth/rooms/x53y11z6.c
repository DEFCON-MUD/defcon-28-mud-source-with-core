inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 11, 6 }));
  set_short( "Passage - x53y11z6" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y12z6.c",
  "south" : DIR+"/rooms/x53y10z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
