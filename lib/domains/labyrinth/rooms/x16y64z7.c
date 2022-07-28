inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 64, 7 }));
  set_short( "Corridor - x16y64z7" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y64z7.c",
  "east" : DIR+"/rooms/x17y64z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
