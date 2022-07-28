inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 44, 3 }));
  set_short( "Corridor - x1y44z3" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y44z3.c",
  "north" : DIR+"/rooms/x1y45z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
