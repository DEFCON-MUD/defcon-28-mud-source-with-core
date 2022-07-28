inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 48, 7 }));
  set_short( "Passage - x50y48z7" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y48z7.c",
  "east" : DIR+"/rooms/x51y48z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
