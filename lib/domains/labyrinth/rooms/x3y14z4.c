inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 14, 4 }));
  set_short( "Hallway - x3y14z4" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y14z4.c",
  "north" : DIR+"/rooms/x3y15z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
