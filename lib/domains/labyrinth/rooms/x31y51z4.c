inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 51, 4 }));
  set_short( "Passage - x31y51z4" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y52z4.c",
  "south" : DIR+"/rooms/x31y50z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
