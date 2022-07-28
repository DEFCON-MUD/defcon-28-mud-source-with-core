inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 49, 7 }));
  set_short( "Passage - x19y49z7" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y50z7.c",
  "south" : DIR+"/rooms/x19y48z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
