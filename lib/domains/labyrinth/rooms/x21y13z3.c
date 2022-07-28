inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 13, 3 }));
  set_short( "Passage - x21y13z3" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y14z3.c",
  "south" : DIR+"/rooms/x21y12z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
