inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 13, 0 }));
  set_short( "Corridor - x23y13z0" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y14z0.c",
  "south" : DIR+"/rooms/x23y12z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
