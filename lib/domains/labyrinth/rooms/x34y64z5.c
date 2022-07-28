inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 64, 5 }));
  set_short( "Hallway - x34y64z5" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y64z5.c",
  "east" : DIR+"/rooms/x35y64z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
