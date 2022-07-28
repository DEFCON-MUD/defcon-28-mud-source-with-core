inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 14, 3 }));
  set_short( "Corridor - x41y14z3" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y14z3.c",
  "east" : DIR+"/rooms/x42y14z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
