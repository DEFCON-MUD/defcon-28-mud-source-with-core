inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 13, 5 }));
  set_short( "Hallway - x25y13z5" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y14z5.c",
  "south" : DIR+"/rooms/x25y12z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
