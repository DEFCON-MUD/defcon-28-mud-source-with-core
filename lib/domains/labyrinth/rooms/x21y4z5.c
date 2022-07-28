inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 4, 5 }));
  set_short( "Passage - x21y4z5" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y5z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
