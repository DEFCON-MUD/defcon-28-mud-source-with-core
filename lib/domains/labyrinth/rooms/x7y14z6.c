inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 14, 6 }));
  set_short( "Passage - x7y14z6" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y15z6.c",
  "south" : DIR+"/rooms/x7y13z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
