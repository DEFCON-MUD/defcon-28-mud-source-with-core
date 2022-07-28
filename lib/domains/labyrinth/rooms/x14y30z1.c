inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 30, 1 }));
  set_short( "Hallway - x14y30z1" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y30z1.c",
  "east" : DIR+"/rooms/x15y30z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
