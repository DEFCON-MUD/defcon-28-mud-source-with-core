inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 49, 4 }));
  set_short( "Passage - x31y49z4" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y50z4.c",
  "south" : DIR+"/rooms/x31y48z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
