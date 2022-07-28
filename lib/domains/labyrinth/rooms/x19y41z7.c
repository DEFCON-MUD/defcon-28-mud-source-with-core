inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 41, 7 }));
  set_short( "Passage - x19y41z7" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y42z7.c",
  "south" : DIR+"/rooms/x19y40z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
