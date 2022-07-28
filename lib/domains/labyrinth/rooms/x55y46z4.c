inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 46, 4 }));
  set_short( "Corridor - x55y46z4" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y47z4.c",
  "south" : DIR+"/rooms/x55y45z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
