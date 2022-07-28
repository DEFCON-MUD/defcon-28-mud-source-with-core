inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 50, 6 }));
  set_short( "Hallway - x16y50z6" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y50z6.c",
  "east" : DIR+"/rooms/x17y50z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
